#include <stdio.h>
#include <string.h>

char buscaUFAM(char texto[])
{
	char tam = 0, i = 0;
	char busca[5] = "UFAM";

	while (texto[tam]) tam++;
	for (i = 0; i <= tam-4;i++)
	{
		//arrumar casos de comparação
		if ((texto[i] == 'U') && (texto[i+1] == 'F') && (texto[i+2] == 'A') && (texto[i+3] == 'M'))
		{
			printf("%d %d\n", texto[i] == 'U', strcmp(busca,&texto[i]));
			printf("%s\n", &texto[i]);
			printf("%s\n", busca);
			printf("%d\n", tam);
			return 1;
		}	
	}
	return 0;
}

char testBuscaUFAM()
{
	char testFail[3][40] = {"","abc","abcUFAhahaha"};
	char testSuccess[4][40] = {"UFAM","UFAMhahaha","ddasdasUFAMhahaha","aaUFAhUFAM"};
	unsigned char i=0;
	for (; i < 3;i++)
	{
		if (buscaUFAM(testFail[i]))
		{
			printf("%s\n", testFail[i]);
			return	0;
		}
	}
	for (i = 0; i < 4; i++)
	{
		if (!buscaUFAM(testSuccess[i]))
		{
			printf("%s\n", testSuccess[i]);
			return	0;
		}
	}

	return 1;
}

int main(void)
{
	testBuscaUFAM() ? printf("Sucesso nos testes\n") : printf("Falha nos testes\n");
	return 0;
}