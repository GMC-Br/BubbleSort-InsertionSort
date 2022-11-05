//Bibliotecas em c
#include <stdio.h>
#include <stdlib.h>
#define MAX 5 // Defindo uma constante
 
void insertion_sort(int *a) //Função de ordenação - Insertion Sort
{
 int i, j, tmp;
  
 for(i = 1; i < MAX; i++)
 {
  tmp = a[i];
  for(j = i-1; j >= 0 && tmp < a[j]; j--)
  {
   a[j+1] = a[j];
  }
  a[j+1] = tmp;
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
 
 insertion_sort(vet); // Chamando a função insertion_sort
 
 // Imprime os valores ordenados
 printf("Valores ordenados: ");
 for(i = 0; i < MAX; i++)
 {
  printf("%d ", vet[i]);
 }
 return 0;
}