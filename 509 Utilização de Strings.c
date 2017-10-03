#include<stdio.h>

int main()
{
	char string[100];							//o tamanho máximo da String introduzida é 99 caracteres; mais de 99 caracteres vaidar erro
	printf("Write a String: ");
	gets(string);
	printf("\n\nThe String is: %s", string);
	return (0);
}
