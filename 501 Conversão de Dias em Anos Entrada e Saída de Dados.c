#include<stdio.h>

int main()
{
	/*Declara��o de Vari�veis*/
	int days;														//declara��o de uma vari�vel int (inteiro)
	float years;													//declara��o de uma vari�vel float (v�rgula flutuante)
	
	/*Entrada de Dados*/
	printf("Number of Days: ");
	scanf("%d", &days);												//� lido um valor do teclado e colocado na vari�vel inteira days; utilizada a fun��o scanf(); A String "%d" indica � fun��o que ser� lido um inteiro; o segundo par�metro passado � fun��o diz que o valor dever� ser amazenado na vari�vel days
	
	/*Convers�o de Dias em Anos*/
	years= (float) days/365;										//como years � uma vari�vel float o compilador faz uma convers�o autom�tica?!?; fazer casting
	printf("\n\n%d Days are aproximatelly %f Years\n", days,years);	//%d imprime um inteiro no ecr� e %f imprime um float no ecr�
	
	return(0);
}
