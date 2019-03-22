#include <stdio.h>

void merge(int v[], int m[], int size)
{
	unsigned int i = 0,j = size-1, k = 0;
	while (i <= j)
	{
		if (v[i] > v[j])
		{
			m[k++] = v[j--];
		} else
		{
			m[k++] = v[i++];
		}
	}
}

int main(void)
{
	int v[] = {1,3,5,8,10,9,7,6,4,2};
	unsigned int i, size = sizeof(v) / sizeof(v[0]);
	int m[size];
	merge(v,m,size);

	for (i = 0; i < size; ++i)
	{
		printf("%d\n", m[i]);	
	}

	return 0;
}