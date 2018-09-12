#include <stdio.h>

unsigned int quadrados(int n)
{
	int i = 1;
	unsigned int soma = 0;
	for (;i<=n;i++)
		soma += (i*i);

	return soma;
}

char testQuadrados() {
	return (quadrados(-1) == 0) &&
		(quadrados(0) == 0) &&
		(quadrados(1) == 1) &&
		(quadrados(2) == 5) &&
		(quadrados(5) == 55) &&
		(quadrados(10) == 385);
}

int main(void)
{
	testQuadrados() ? printf("Todos os testes passaram!\n") : printf("Testes falharam!\n");
	return 0;
}