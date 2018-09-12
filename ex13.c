#include <stdio.h>

void diminuiProximo(int v[], unsigned int size)
{
	unsigned int i = 1;
	int ant = v[0], atual;
	for (; i < size; i++)
	{
		atual = v[i];
		v[i] -= ant;
		ant = atual;
	}
}

void aumentaProximo(int v[], unsigned int size)
{
	unsigned int i = 1;
	for (; i < size; i++)
	{
		v[i] += v[i-1];
	}
}

int main(void)
{
	int v[] = {1,4,5,2,4,7,8,4,6};
	unsigned int size = (sizeof(v)/sizeof(int));
	int i = 0;
	printf("Vetor original\n");
	for (;i < size; i++)
		printf("%d ",v[i]);
	
	diminuiProximo(v, size);
	printf("\n\nVetor diminuto\n");
	for (i = 0;i < size; i++)
		printf("%d ",v[i]);
	
	aumentaProximo(v, size);
	printf("\n\nVetor original\n");
	for (i = 0;i < size; i++)
		printf("%d ",v[i]);

	return 0;
}