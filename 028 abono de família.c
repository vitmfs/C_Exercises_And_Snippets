#include<stdio.h>
#include<string.h>
int main()
{
	int c,a,i,sra, conta=0, r;
	float rff, somar=0, recebe, abono;
	
	do 
	{
		printf("Quantas crianças/jovens existem no agregado (0 para terminar)?");
		scanf("%d",&c);
	}
	while (c<0);
	
	while (c!=0)
	{
		do 
		{
			printf("\nQuantos adultos existem no agregado?");
			scanf("%d",&a);
		}
		while (a<=0);
		
		sra=0;
		
		for (i=1;i<=a;i++)
		{
			do 
			{
				printf("\nQual o rendimento do %d adulto?",i);
				scanf("%d",&r);
			}
			while (r<0);
			
			sra=sra+r; 
		}
		
		rff=(float)sra/(c+1);
		
		if (rff<2934.54)
		{
			printf("\nEsta familia pertence ao 1o escalao");
			abono=35.19;
		}
		else if (rff<5869.08)
		{
			printf("\nEsta familia pertence ao 2o escalao");
			abono=29.19;}
		else if (rff<8803.62)
		{
			printf("\nEsta familia pertence ao 3o escalao");
			abono=26.54;}
		else
		{
			printf("\nEsta familia pertence ao 4o escalao");
			printf("\nEsta familia nao vai receber abono.");
			abono=0;
		}
		
		recebe=abono*c;
		
		if (a==1)
		recebe=recebe*1.2;
		
		if (abono>0)
		printf("\nEsta familia vai receber %4.2f euros mensais.", recebe);
		somar=somar+recebe;
		conta++;
		do 
		{
			printf("\nQuantas crianças/jovens existem no agregado (0 para terminar)?");
			scanf("%d",&c);
		}
		while (c<0); 
	}
	
	if (conta>0)
	{
		float media=(float)somar/conta;
		printf("\nA media dos %d abonos de familia calculados = % 4.2f euros.\n", conta, media);
	}
	system("pause");
}
