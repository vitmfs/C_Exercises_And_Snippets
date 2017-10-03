#include <stdio.h>

int main ()
{
	int Um;
	int Dois;
	
	printf ("Qual a idade 1o irmao? ");
	scanf("%d", &Um);
	
	printf ("Qual a idade do 2o? ");
	scanf("\n%d", &Dois);
	
	if (Um>Dois) 
	{
		printf("Maior = %d\n",Um);
		
	} else if (Um==Dois) {
		
		printf("Gemeos\n");
		
	} else {
		
		printf("Maior = %d\n",Dois);

	}
	
	system ("pause");
}
