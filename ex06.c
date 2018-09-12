#include<stdio.h>

void insertionSort(int v[], unsigned int size)
{
	unsigned int i=1,j,k;
	int pivot, temp;

	for (;i<size;i++)
	{
		pivot = v[i];
		j=i-1;
		k=i;
		for (; k && (v[j] > v[k]); j--,k--)
		{
			temp = v[k];
			v[k] = v[j];
			v[j] = temp;
		}
		v[k] = pivot;
	}
}

char testInsertionSort()
{
	int case2[] = {1,2};
	int case3[] = {4,1};
	int case4[] = {7,7,7,-1,7,7,7,3,5,5,5,5,5,5,6,-1};
	int case5[] = {5,1,1,2,3,2};
	int case6[] = {5,4,3,2,1,0,-1,-2};
	int i = 0;
	unsigned int size;

	size = sizeof(case2)/sizeof(int);
	insertionSort(case2,size);
	size = size-1;
	for (i = 0; i < size; i++)
		if (case2[i] > case2[i+1])
			return 0;

	size = sizeof(case3)/sizeof(int);
	insertionSort(case3,size);
	size = size-1;
	for (i = 0; i < size; i++)
		if (case3[i] > case3[i+1])
			return 0;

	size = sizeof(case4)/sizeof(int);
	insertionSort(case4,size);
	size = size-1;
	for (i = 0; i < size; i++)
		if (case4[i] > case4[i+1])
			return 0;
		
	size = sizeof(case5)/sizeof(int) - 1;
	insertionSort(case5,size);
	size = size-1;
	for (i = 0; i < size; i++)
		if (case5[i] > case5[i+1])
			return 0;

	size = sizeof(case6)/sizeof(int);
	insertionSort(case6,size);
	size = size-1;
	for (i = 0; i < size; i++)
		if (case6[i] > case6[i+1])
			return 0;

	return 1;
}

int main(void)
{
	testInsertionSort() ? printf("\nTodos os testes passaram!\n") : printf("\nAlgum teste falhou!\n");
	return 0;
}