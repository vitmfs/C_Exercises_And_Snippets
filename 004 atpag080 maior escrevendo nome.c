#include <stdio.h>

int main ()
{
	char nome1[20];
	int Um;
	
	char nome2[20];
	int Dois;
	
	printf ("Qual o nome 1o irmao?");
	scanf("\n%s", nome1);
	printf ("Qual a idade 1o irmao?");
	scanf("\n%d", &Um);
	
	printf ("Qual o nome do 2o?");
	scanf("\n%s", nome2);
	printf ("Qual a idade do 2o?");
	scanf("\n%d", &Dois);
	
	if (Um>Dois)
	{
		printf("Maior=%d\n",Um);
		printf("O %s mais velho\n",nome1);
		
	} else if (Um==Dois) {
		
		printf("Gemeos\n");
		
	} else { 
	
		printf("Maior = %d\n",Dois);
		printf("O %s e mais velho\n",nome2);
	}
	
	system("pause");
}
