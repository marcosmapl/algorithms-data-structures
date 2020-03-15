#include <stdio.h>

#ifndef N
#define N 4
#endif

int somaDiagonalSecundaria(int m[N][N])
{
	unsigned int i = 0, j = 0;
	unsigned int soma = 0;
	
	for (i = 0; i < N; i++)
	for (j = 0; j < N; j++)
	{
		if ((i + j) == (N-1))
			soma += m[i][j];
	}
	return soma;
}

char testSoma()
{
	int v[N][N] = 
	{
		{1,3,8,9},
		{1,3,8,9},
		{1,3,8,9},
		{1,4,0,5}
	};
	return somaDiagonalSecundaria(v) == (9+8+3+1);
}

int main(void) 
{
	testSoma() ? printf("Sucesso!\n") : printf("Falha!\n");;
}