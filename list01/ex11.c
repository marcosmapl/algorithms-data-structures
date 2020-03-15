#include <stdio.h>

void dispersao(int v[], unsigned int size, int delta)
{
	unsigned int i = 0;
	for (; i < size; i++)
		v[i] -= delta; 
}

char testDispersao() {
	int test[] = {0,3,2,5,4,1,6,9,8,7};
	int output[] = {-3,0,-1,2,1,-2,3,6,5,4};
	int delta = 3;
	unsigned int i = 0;

	dispersao(test, sizeof(test)/sizeof(int), delta);
	for (; i < 10; i++)
		if (test[i] != output[i])
			return 0;
	return 1;
}

int main(void)
{
	testDispersao() ? printf("Sucesso!\n") : printf("Falha!\n");
	return 0;
}