#include<stdio.h>

int main()
{
	int x, y;
	
	/*Duas vari�veis de controlo: x e y. Foi atribu�do o valor zero a cada uma delas na inicializa��o do ciclo for e ambas s�o incrementadas no ciclo*/
	
	for(x=0, y=0; x+y<100;++x, y++)
	{
		printf("\n%d", x+y); //o programa imprimir� os n�meros pares de 2 a 98
	}
	
	return (0);
}
