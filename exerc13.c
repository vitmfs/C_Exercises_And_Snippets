//Vítor Manuel Ferreira da Silva - 36341

#include<stdio.h>

int main()
{
	int N;
	int i;
	do
	{
		printf("Pretende escrever a tabuada de que numero inteiro (entre 1 e 10)? \n");
		scanf("%d", &N);
	}
	while(N<1||N>10);
	
	
	for(i=1;i<=10;i++)
	{
		printf("%d x %d = %d\n", N, i, (N*i));
	}
	
	system("pause");
	
}
