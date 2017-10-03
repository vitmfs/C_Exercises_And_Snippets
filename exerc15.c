//Vítor Manuel Ferreira da Silva - 36341

#include<stdio.h>
#include<conio.h>

int main()
{
	int num, r,c, sp,x;
	
	do
	{
		printf("Quantas linhas para a arvore (entre 2 e 5)?\n");
		scanf("%d", &num);
	}
	while(num<2||num>5);

	
	for(r=1;num>=r;r++)
	{
		for(sp=num-r;sp>=1;sp--)
		{
			printf(" ");
		}
		for(c=1;c<=r;c++)
		{
			printf("%d", c);
		}
		for(x=r-1;x>=1;x--)
		{
			printf("%d", x);
		}
		
		printf("\n");
	}
	
	return 0;
	
}
