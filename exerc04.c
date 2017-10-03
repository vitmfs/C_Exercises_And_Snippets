#include<stdio.h>

int main()
{
	int numeroInteiro;
	float numeroReal;
	float produtoDosDoisNumeros;
	
	printf("Introduza um numero inteiro!\n");
	scanf("%d", &numeroInteiro);
	
	printf("Introduza agora um numero real!\n");
	scanf("%f", &numeroReal);
	
	produtoDosDoisNumeros= numeroInteiro*numeroReal;
	
	printf("O produto %d x %4.2f = %4.2f\n\n", numeroInteiro, numeroReal,produtoDosDoisNumeros);
	
	system("pause");
}
