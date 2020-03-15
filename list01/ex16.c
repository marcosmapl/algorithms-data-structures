#include <stdio.h>
#include <limits.h>

#ifndef N
#define N 3
#endif

int maior(int m[N][N])
{
	unsigned int i = 0, j = 0;
	int maior = INT_MIN;
	
	for (i = 0; i < N; i++)
	for (j = 0; j < N; j++)
	{
		if (m[i][j] > maior)
			maior = m[i][j];
	}
	return maior;
}

char testMaior()
{
	int v[N][N] = 
	{
		{1,2,3},
		{1,6,4},
		{5,3,4}
	};
	return maior(v) == 6;
}

int main(void) 
{
	testMaior() ? printf("Sucesso!\n") : printf("Falha!\n");;
}