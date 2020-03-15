#include <stdio.h>

void inverte(int v[], unsigned int size)
{
	unsigned int i = 0, j = size -1;
	int temp;
	for (;i<j;i++,j--)
	{
		temp = v[i];
		v[i] = v[j];
		v[j] = temp;
	}
}

int main(void)
{	
	int v[] = {1,2,3,4,5,6};
	unsigned int i, size = sizeof(v) / sizeof(v[0]);
	inverte(v,size);
	for (i = 0; i < size; ++i)
	{
		printf("%d\n", v[i]);
	}
	return 0;
}