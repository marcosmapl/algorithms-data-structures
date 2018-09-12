#include <stdio.h>
#include <limits.h>

#ifndef N
#define N 10
#endif

// acha o menor valor acima de um valor base.
int proximoMenor(int v[N], int base)
{
	unsigned int i = 0;
	int teto = INT_MAX;
	for (; i < N; i++)
		if ((v[i] > base) && (v[i] < teto))
			teto = v[i];
	return teto;	
}

//conta a quantidade de ocorrecias de uma chave.
unsigned int contaOcorrencias(int v[N], int chave)
{
	unsigned int i = 0, count = 0;
	for (; i < N; i++)
		if (v[i] == chave)
			count++;
	return count;
}

//encontra a mediana de uma serie de elementos não ordenados
// se N for impar a mediana é o elemento central dos dados ordenados ou seja elemento de índice N/2.
// se N for par a mediana é a média entre os elementos de índices N/2 e (N/2)+1.
float mediana(int v[N])
{
	unsigned int i = 0;
	unsigned int stop, freq = 0;
	float mediana = INT_MIN;

	stop = (N / 2);
	if (N % 2)
		stop++;

	do
	{
		mediana = proximoMenor(v,mediana);
		freq += contaOcorrencias(v,mediana);
	} while (freq < stop);

	if ((freq == stop) && (N % 2 == 0))
	{
		mediana += proximoMenor(v,mediana);
		mediana /= 2;
	}
	
	return mediana;
}

char testMediana()
{
	int v[N] = {1,3,3,2,3,4,4,4,6,6};
	printf("%f\n", mediana(v));
	return 1;
}

int main(void) 
{
	testMediana() ? printf("Sucesso!\n") : printf("Falha!\n");;
}