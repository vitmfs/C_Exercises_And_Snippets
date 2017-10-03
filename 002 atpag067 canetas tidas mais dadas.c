#include <stdio.h>

int main ()
{
	int canetas;
	int dadas;
	int soma;
	 
	printf ("Quantas canetas tem o Joao? ");
	scanf("%d", &canetas);
	 
	printf ("Quantas canetas lhe deu o Primo? ");
	scanf("\n%d", &dadas);
	 
	soma = canetas + dadas;
	
	printf("\nsoma = %d\n",soma);
	 
	system ("pause");
}
