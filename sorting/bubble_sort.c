/*
  Selection Sort Example
  by Marcos Lima (marcos.lima@icomp.ufam.edu.br)]
  March 15th, 2020
*/
#include <stdio.h>

void printArray(int *v, unsigned int size) {
    printf("\n");
    for (unsigned int i = 0; i < size; i++)
        printf("%d ", v[i]);
}

void bubbleSort(int *v, unsigned int size) {
    unsigned int i,j, k = size;
    
    while (--k) {
        for (i = 0, j = 1; i < k; i++, j++) 
        {
            if (v[i] > v[j]) 
            {
                unsigned int temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
        printArray(v, size);
    }
}


int main() {
    int v[] = {6,4,-11,3,8,9,-12,1,-2,15,-7,13,10,14,-5};
  
    unsigned int size = sizeof(v) / sizeof(v[0]);

    printf("BUBBLE SORT EXAMPLE\n");
    printf("\nINITIAL ARRAY: ");
    printArray(v, size);

    printf("\n");
    bubbleSort(v, size);

    printf("\n\nSORTED ARRAY: ");
    printArray(v, size);

    return 0;
}

