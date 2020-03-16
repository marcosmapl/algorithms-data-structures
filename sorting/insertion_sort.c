/*
  Insertion Sort Example
  by Marcos Lima (marcos.lima@icomp.ufam.edu.br)]
  March 15th, 2020
*/
#include <stdio.h>

void printArray(int *v, unsigned int size) {
    printf("\n");
    for (unsigned int i = 0; i < size; i++)
        printf("%d ", v[i]);
}

void insertionSort(int *v, unsigned int size) {
    unsigned int i, j;
    
    // i splits array in two partitions
    // left-side will be ordered by insertion
    // right-side unordered elements
    // we start the insertion by the second element cause the first one is always ordered.
    for (i = 1; i < size; i++) {
        
        // saves value of the ith element for insertion
        int value = v[i];

        // now we do a right-shift in all elements of the left-side partition
        // that are greater than 'value' (ith element)        
        j = i;
        while (j && v[j-1] > value) {
            v[j] = v[j-1];
            j--;
        }

        // after the right-shift we can insert 'value' in correct position
        v[j] = value;
        printArray(v, size);
    }    
}


int main() {
    int v[] = {6,4,-11,3,8,9,-12,1,-2,15,-7,13,10,14,-5};
  
    unsigned int size = sizeof(v) / sizeof(v[0]);

    printf("INSERTION SORT EXAMPLE\n");
    printf("\nINITIAL ARRAY: ");
    printArray(v, size);

    printf("\n");
    insertionSort(v, size);

    printf("\n\nSORTED ARRAY: ");
    printArray(v, size);

    return 0;
}

