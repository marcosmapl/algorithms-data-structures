#include <stdio.h>
#include <string.h>

char buscaUFAM(char texto[])
{
	char i = 0, k = 0;
	char busca[5] = "UFAM";

	while (texto[i]) 
	{
		if (texto[i] == busca[k])
		{			
			while ((busca[k]) && (texto[i]))
			{
				if (busca[k] == texto[i]) 
				{
					k++;
					i++;
				}
				else
					break;
			}

			if (busca[k] == 0)
				return 1;
			k = 0;	
		} else
			i++;
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
			return	0;
		}
	}
	for (i = 0; i < 4; i++)
	{
		if (!buscaUFAM(testSuccess[i]))
		{
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