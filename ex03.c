#include <stdio.h>

void inverte(int v[], unsigned long int n)
{
	unsigned long int i = 0, meio = n/2, k = n-1;
	int temp;
	for (;i <= meio; i++)
	{
		temp = v[i];
		v[i] = v[k];
		v[k] = temp;
		k--;
	}
}

char testInverte() {
	int teste[] = {1,-2,3,4};
	int controle[] = {4,3,-2,1};
	unsigned long int tam, i = 0, k;

	tam = (sizeof(teste)/sizeof(teste[0]));
	k = tam - 1;
	for (; i < tam; i++) 
	{
		if (teste[i] != controle[k])
			return 0;
		k--;
	}

	return 1;
}

int main(void) 
{
	testInverte() ? printf("Sucesso nos testes\n") : printf("Falha nos testes\n");
	return 0;
}