#include <stdio.h>

int main ()
{
	int ocorrencias[20];
	int i;
	
	for(i=1;i<=20;i ++)
	{
		ocorrencias[i]=0;
	}

	int num;
	
	do
	{
		printf("Qual o primeiro número? ");
		scanf("%d",&num);
	}
	while((num<0)||(num>20));
	
	while (num!=0)
	{
		ocorrencias[num]++;
		
		do
		{
			printf("Qual o primeiro número? ");
			scanf("%d",&num);
		}
		while((num<0)||(num>20));
	}
	
	for(i=1;i<=20;i ++)
	{
		if (ocorrencias[i]!=0)
		{
			if (ocorrencias[i]>1)
			{
				printf("%d ocorre %d vezes \n",i,ocorrencias[i]);
			}
			else
			{
				printf("%d ocorre %d vez \n",i,ocorrencias[i]);
			}
		
		}
		
	}
	
	system ("pause");
}

