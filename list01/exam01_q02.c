#include <stdio.h>

typedef	struct	{
	char	nome[20];	
	char	alimentacao;
	float	altura;
} tipoPessoa;

void partialSelectionSort(tipoPessoa v[], unsigned int size, unsigned int k)
{
	unsigned int i,j,idx;
	tipoPessoa temp;
	for (i = 0; i < k; ++i)
	{
		idx = i;
		for (j = (i+1); j < size; ++j)
		{
			if (v[j].altura < v[idx].altura)
				idx = j;
		}
		temp = v[i];
		v[i] = v[idx];
		v[idx] = temp;
	}
}

int main(void)
{
	tipoPessoa v[] = 
	{
		{.nome = "Tony Stark", .alimentacao = 'S', .altura = 1.75f},
		{.nome = "Thor Odin", .alimentacao = 'A', .altura = 1.85f},
		{.nome = "Brunce Barner", .alimentacao = 'S', .altura = 2.30f},
		{.nome = "Steve Rogers", .alimentacao = 'A', .altura = 1.78f},
		{.nome = "Natasha Romanov", .alimentacao = 'B', .altura = 1.65f}
	};
	unsigned int i = 0;
	unsigned int size =  sizeof(v) / sizeof(tipoPessoa);

	partialSelectionSort(v,size, 1);
	for (; i < size; ++i)
	{
		printf("%s ", v[i].nome);
		printf("%c ", v[i].alimentacao);
		printf("%f\n", v[i].altura);
	}
	return 0;
}