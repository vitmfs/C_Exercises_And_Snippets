#include<stdio.h>

int main()
{
	char string[100];					//String até 99 caracteres
	int i, cont;
	printf("Write a sentence: ");
	gets(string);						//le a String
	printf("\n\nWritten sentence: %s", string);
	cont= 0;
	for(i=0; string[i]!='\0';i++)		//string[i] é comparado com o teminador nulo '\0' que é o carácter final da String
	{
		if(string[i]=='c')
		{
			cont++;						//incrementa o contador de caracteres
		}
	}
	
	printf("\n\nThe number of c's is: %d", cont);
	
}
