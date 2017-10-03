#include<stdio.h>

int main()
{
	int x, y;
	
	/*Duas variáveis de controlo: x e y. Foi atribuído o valor zero a cada uma delas na inicialização do ciclo for e ambas são incrementadas no ciclo*/
	
	for(x=0, y=0; x+y<100;++x, y++)
	{
		printf("\n%d", x+y); //o programa imprimirá os números pares de 2 a 98
	}
	
	return (0);
}
