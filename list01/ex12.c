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

char testDiminuiProximo()
{
	int input[] = {2,1};
	unsigned int i = 0;
	diminuiProximo(input, sizeof(input)/sizeof(int));
	for (; i < (sizeof(input)/sizeof(int)); i++)
		printf("%d\n", input[i]);
	return 1;
}

int main(void)
{
	testDiminuiProximo() ? printf("Sucesso!\n") : printf("Falha\n");;
	return 0;
}