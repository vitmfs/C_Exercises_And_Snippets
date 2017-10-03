#include<stdio.h>

int main()
{
	float comprimento;
	float largura;
	
	do
	{
		printf("Qual o comprimento?\n");
		scanf("%f", &comprimento);
	}
	while(comprimento<=0);
	
	
	
	do
	{
		printf("Qual a largura?\n");
		scanf("%f", &largura);
	}
	while(largura<=0||largura>comprimento);
	
	
	printf("A area de um retangulo com o comprimento %4.2f e a largura %4.2f vai ser %4.2f!\n\n", comprimento, largura, (comprimento*largura));
	
	system("pause");
}

