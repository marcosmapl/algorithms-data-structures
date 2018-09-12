#include <stdio.h>

unsigned int contaLetra(char frase[], char letra)
{
	unsigned i = 0, ocorrencias = 0;
	char cap;
	if (letra > 96)
		cap = letra - 32;
	else
		cap = letra + 32;
	while (frase[i])
	{
		if ((frase[i] == letra) || (frase[i] == cap))
			ocorrencias++;
		i++;
	}
	return ocorrencias;
}

char testContaLetra() {
	char s1[] = "";
	char s2[] = "b";
	char s3[] = "baB";
	char s4[] = "Arara Coelho melao Limao Louco";

	return (contaLetra(s1,'a') == 0) &&
		(contaLetra(s2,'A') == 0) &&
		(contaLetra(s2,'b') == 1) &&
		(contaLetra(s3,'a') == 1) &&
		(contaLetra(s3,'B') == 2) &&
		(contaLetra(s4,'R') == 2) &&
		(contaLetra(s4,'l') == 4);
}


int main()
{

	testContaLetra() ? printf("Sucesso!\n") : printf("Falha!\n");
	return 0;
}