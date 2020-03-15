#include <stdio.h>

char palindrome(char palavra[])
{
	unsigned size = 0, i = 0;
	while(palavra[size]) size++;
	size--;
	while ((i < size) && (palavra[i++] == palavra[size--]));
	return (i == size);
}