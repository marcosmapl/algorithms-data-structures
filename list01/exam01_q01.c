#include <stdio.h>

#define N 3

unsigned int contaLinhaPar(int m[N][N])
{
	unsigned int i,count = 0;
	for (i = 0; i < N; ++i)
	{
		if (m[i][0] % 2 == 0)
			count++;
	}
	return count;
}

int main(void)
{
	int m[N][N] = 
	{
		{286,2,3},
		{56,3,5},
		{10,6,6}
	};
	printf("%d\n", contaLinhaPar(m));

	return 0;
}