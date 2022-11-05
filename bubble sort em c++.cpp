//Bibliotecas em c++
#include <iostream>
#include <bits/stdc++.h>
#define MAX 5 // Defindo uma constante

using namespace std;
 
 void bubble_sort(int *a) //Função de ordenação - Bubble Sort
{
 int i, j, tmp;
 
  for(i = 0; i < MAX; i++)
  {
   for(j = i+1; j < MAX; j++)
   {
    if(a[j] < a[i])
    {
     tmp = a[i];
     a[i] = a[j];
     a[j] = tmp;
    }
  }
 }
}

int main(int argc, char** argv) // Função main
{
 int i, vet[MAX];
 
 for(i = 0; i < MAX; i++)
 {
  std::cout<<"Digite um valor: ";
  std::cin>>vet[i];
 }
 
 bubble_sort(vet); // Chamando a função bubble_sort
 
 // Imprime os valores ordenados
 std ::cout<<"Valores ordenados: ";
 for(i = 0; i < MAX; i++)
 {
  std::cout<<vet[i];
 }
 
 return 0;
}
