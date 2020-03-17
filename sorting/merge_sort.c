/*
  Merge Sort Example
  by Marcos Lima (marcos.lima@icomp.ufam.edu.br)
  March 17th, 2020
*/
#include <stdio.h>
#include <stdlib.h>

void printArray(int *v, unsigned int size) {
    printf("\nArray: ");
  
    for (unsigned int i = 0; i < size; i++)
        printf("%d ", v[i]);

    printf("\n");
}

void merge(int v[], int vaux[], unsigned int start, unsigned int mid, unsigned int end) {
  unsigned int i, j, k;

  k = start;
  i = start;
  j = mid + 1;

  while ((i <= mid) && (j <= end)) {
    if (v[i] <= v[j]) {
      vaux[k++] = v[i++];
    } else {
      vaux[k++] = v[j++];
    }
  }
  
  while (i <= mid) 
    vaux[k++] = v[i++];

  while (j <= end) 
    vaux[k++] = v[j++];

  for (k = start; k <= end; k++) 
    v[k] = vaux[k]; 

}

void mergeIntern(int v[], int vaux[], unsigned int start, unsigned int end) {
  unsigned int mid;

  if (start < end) {
    mid = (start + end) / 2;
    mergeIntern(v, vaux, start, mid);
    mergeIntern(v, vaux, mid+1, end);
    merge(v, vaux, start, mid, end);
  }

}

void mergeSort(int v[], unsigned int size) {
  int *vaux ;

  vaux = (int *) malloc(sizeof(v[0]) * size);

  mergeIntern(v, vaux, 0, size-1);
  free(vaux);
}


int main() {
  int v[] = {6,4,-11,3,8,9,-12,1,-2,15,-7,13,10,14,-5};
  
  unsigned int size = sizeof(v) / sizeof(v[0]);

  printf("MERGE SORT EXAMPLE");
  printf("SORTING ARRAY: ");
  printArray(v, size);

  mergeSort(v, size);

  printf("\nSORTED ARRAY: ");
  printArray(v, size);
  
  return 0;
}

