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
    unsigned char swap;
    
    // k splits the array in two partitions
    // right side is ordered (i >= k)
    // left-side is unordered (i < k)
    while (--k) {
        
        // swap is a improvement
        // it stops the bubble sort if array is ordered
        swap = 0;
        
        // now we pass through the array
        // swapping the greater elementos to the right-side
        for (i = 0, j = 1; i < k; i++, j++) 
        {
            if (v[i] > v[j]) 
            {
                unsigned int temp = v[i];
                v[i] = v[j];
                v[j] = temp;
                swap = 1;
            }
        }
        printArray(v, size);
        
        // if we didn't swap any element
        // then the array is ordered, we can stop here
        if (!swap)
            break;
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

