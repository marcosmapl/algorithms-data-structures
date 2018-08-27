#include <stdio.h>

int isOrdered(int v[], unsigned int size)
{
	unsigned int i = 0, j = 1;
	for (; j < size; i++, j++)
	{
		if (v[i] > v[j])
			return 0;
	}
	return 1;
}

char testIsOrdered() 
{
	int unity[] = {1};
	int twice[] = {1,2};
	int twice2[] = {2,1};
	int unordered[] = {1,2,3,4,5,6,3,2,1};
	int ordered[] = {1,2,3,4,5,6,7,8,9,10,11};

	if (isOrdered(twice2, sizeof(twice2) / sizeof(&twice2[0])))
		return 0;
	if (isOrdered(unordered, sizeof(unordered) / sizeof(&unordered[0])))
		return 0;

	if (!isOrdered(unity, sizeof(unity) / sizeof(&unity[0])))
		return 0;
	if (!isOrdered(twice, sizeof(twice) / sizeof(&twice[0])))
		return 0;
	if (!isOrdered(ordered, sizeof(ordered) / sizeof(&ordered[0])))
		return 0;

}

int main(void)
{
	testIsOrdered() ? printf("Sucesso nos testes\n") : printf("Falha nos testes\n");
	return 0;
}