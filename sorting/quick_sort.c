#include <stdlib.h>
#include <stdio.h>

#define N 100
#define MEAN 20
#define DEVIATION 10

/* 
Quick Sort inner function
*/
void qSortIntern(int v[], int start, int end) {
    int pivot;
    int temp;
    int i, j;

    if (end - start > 0) { // check if the partition has more than 1 element
        
        i = start;
        j = end;
  
        pivot = v[(i+j)/2]; // choose pivot as middle element
    
        do {
            
            while(v[i] < pivot) i++;    // search in left partition if there is a element >= pivot 
            while(v[j] > pivot) j--;    // search in rith partition if there is a element < pivot
            
            if(i <= j) {  // swap wrong elements
	            temp = v[i];
	            v[i] = v[j];
	            v[j] = temp;
	            i++;
	            j--;
            }
            
        } while (i <= j);
    
        qSortInterno(v, start, j);
        qSortInterno(v, i, end);
    }
}

/* 
Quick Sort extern function
*/
void quickSort(int v[], int n) {
  qSortInterno(v, 0, n-1);
}

int main() {
    int *v;
    int i;
    srand(0);
  
    v = (int *) malloc (sizeof(int) * N);
    for(i = 0; i < N; i++) {
        v[i]= (rand() % (MEAN * 2)) - DEVIATION;
    }
    
    printf("UNSORTED ARRAY.\n");
    for(i = 0; i < N; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
    
    // N - number of elements in array
    quickSort(v, N);
    
    printf("SORTED ARRAY.\n");
    for(i = 0; i < N; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

