#include <stdio.h>

#define N 3

char quatroOcorrencias(int m[N][N], int k)
{
	unsigned int count = 0;
	unsigned int i = 0, j = 0;
	for (; i < N; i++)
	for (j = 0; j < N; j++) 
	{
		if (m[i][j] == k)
			count++;
		if (count > 4)
			return 0;
	}
	if (count < 4)
		return 0;
	else 
		return 1;
}

char testOc() 
{
	int m1[N][N] = 
	{
		{0,0,0},
		{0,0,0},
		{0,0,0}
	};
	int k = 5;

	if (quatroOcorrencias(m1,k)) return 0;
	m1[0][1] = k;
	if (quatroOcorrencias(m1,k)) return 0;
	m1[1][0] = k;
	m1[0][0] = k;
	if (quatroOcorrencias(m1,k)) return 0;
	m1[N][N] = k;
	if (!quatroOcorrencias(m1,k)) return 0;

	return 1;
}

int main(void)
{
	testOc ? printf("Sucesso!\n") : printf("Falha!\n");;
	return 0;
}