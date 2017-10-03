#include<stdio.h>

int main()
{
	int numero;
	
	do
	{
		printf("Qual o seu numero de aluno?\n");
		scanf("%d", &numero);	
	}
	while(numero<= 0);
	
	printf("Bem vindo a aula de Algoritmia e Programacao aluno numero %d. Vamos divertir-nos imenso!\n\n", numero);
	
	return 0;
	
}
