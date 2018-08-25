#include <stdio.h>

int fatorial(int n) 
{
	register int i = 2;
	register int fat = 1;
	if (n < 2)
		return 1;
	for (;i<=n;i++)
		fat *= i;
	return fat;
}

char testaFatorial() 
{
	if (fatorial(-50) != 1) return 0;
	if (fatorial(-5) != 1) return 0;
	if (fatorial(0) != 1) return 0;
	if (fatorial(1) != 1) return 0;
	if (fatorial(2) != 2) return 0;
	if (fatorial(3) != 6) return 0;
	if (fatorial(5) != 120) return 0;
	if (fatorial(10) != 3628800) return 0;


	return 1;
}

int main(void) 
{
	testaFatorial() ? printf("Sucesso nos testes!\n") : printf("Testes falharam!\n");
	return 0;
}