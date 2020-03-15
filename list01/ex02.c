#include <stdio.h>

void modificaVetor(int v[], unsigned long int n)
{
	unsigned long int i = 0;
	for (; i < n; i++) 
	{
		if (v[i] <= 0)
			v[i] = -2;
		else if (v[i] > 5)
			v[i] = 0;
		else
			v[i] = -1;
	}
}

char testModificaVetor() 
{
	unsigned long int i = 0, tam;
	int teste[] = {9,2,-3,4,-10,6,-2,0,55,-1,1,4,3};
	int controle[] = {0,-1,-2,-1,-2,0,-2,-2,0,-2,-1,-1,-1};

	tam = (sizeof(teste)/sizeof(teste[0]));
	modificaVetor(teste, tam);

	for (; i < tam; i++) 
	{
		if (teste[i] != controle[i])
		{
			return 0;
		}
	}
	return 1;
}

int main(void) 
{
	testModificaVetor() ? printf("Sucesso nos testes\n") : printf("Falha nos testes\n");
	return 0;
}