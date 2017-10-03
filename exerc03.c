//Vítor Manuel Ferreira da Silva - 36341

#include<stdio.h>

int main()
{
	int numero;
	int idade;
	int peso;
	
	do
	{
		printf("Qual o seu numero de aluno?\n");
		scanf("%d", &numero);
	}
	while(numero<= 0);
	
	do
	{
		printf("Qual a idade do aluno?\n");
		scanf("%d", &idade);
	}
	while(numero<= 0);
	
	do
	{
		printf("Qual o peso do aluno?\n");
		scanf("%d", &peso);
	}
	while(numero<= 0);
	
	printf("Ola! Es o aluno %d, tens %d anos e tens %d Kg!\n\n", numero, idade, peso);
		
	system("pause");
}
