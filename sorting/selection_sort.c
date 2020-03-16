/*
  Selection Sort Example
  by Marcos Lima (marcos.lima@icomp.ufam.edu.br)]
  March 15th, 2020
*/
#include <stdio.h>

void printArray(int *v, unsigned int size) {
    printf("\nArray: ");
  
    for (unsigned int i = 0; i < size; i++)
        printf("%d ", v[i]);

    printf("\n");
}

void selectionSort(int *v, unsigned int size) {
  int min;

  for (unsigned int i = 0; i < size; i++)  {
    min = i;
    
    for (unsigned int j = i; j < size; j++) 
    {
      if (v[j] < v[min])
        min = j;
    }
    
    int temp = v[i];
    v[i] = v[min];
    v[min] = temp;
    
    printArray(v, size);
  }

}


int main() {
  int v[] = {6,4,-11,3,8,9,-12,1,-2,15,-7,13,10,14,-5};
  
  unsigned int size = sizeof(v) / sizeof(v[0]);

  printf("SELECTION SORT EXAMPLE");
  printf("SORTING ARRAY: ");
  printArray(v, size);

  selectionSort(v, size);

  printf("\nSORTED ARRAY: ");
  printArray(v, size);
  
  return 0;
}

