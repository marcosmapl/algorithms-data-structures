#include <stdio.h>

// retorna o n-esimo valor da sequencia de fibonacci {0, 1, 1, 2, 3, 5, 8, ...}
unsigned int nFibonacci(unsigned int n)
{
	unsigned int a = 0, b = 1, temp;
	if (n == 0)
		return a;
	for (;n > 1; n--)
	{
		temp = b;
		b += a;
		a = temp;
	}
	return b;
}