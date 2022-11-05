//Bibliotecas em c
#include <stdio.h>
#include <stdlib.h>
#define MAX 5 // Defindo uma constante
 
void bubble_sort(int *a) //Função de ordenação Bubble Sort
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
  printf("Digite um valor: ");
  scanf("%d", &vet[i]);
 }
 
 bubble_sort(vet); //Chamando a função bubble_sort
 
 // Imprime os valores ordenados
 printf("Valores ordenados: "); 
 for(i = 0; i < MAX; i++)
 {
  printf("%d ", vet[i]);
 }
 return 0;
}