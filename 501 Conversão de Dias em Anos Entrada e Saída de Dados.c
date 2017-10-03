#include<stdio.h>

int main()
{
	/*Declaração de Variáveis*/
	int days;														//declaração de uma variável int (inteiro)
	float years;													//declaração de uma variável float (vírgula flutuante)
	
	/*Entrada de Dados*/
	printf("Number of Days: ");
	scanf("%d", &days);												//é lido um valor do teclado e colocado na variável inteira days; utilizada a função scanf(); A String "%d" indica á função que serã lido um inteiro; o segundo parâmetro passado à função diz que o valor deverá ser amazenado na variável days
	
	/*Conversão de Dias em Anos*/
	years= (float) days/365;										//como years é uma variável float o compilador faz uma conversão automática?!?; fazer casting
	printf("\n\n%d Days are aproximatelly %f Years\n", days,years);	//%d imprime um inteiro no ecrã e %f imprime um float no ecrã
	
	return(0);
}
