#include<stdio.h>

int main()
{
	int num;
	printf("Press a number key: ");
	scanf("%d", &num);
	if(num>10)
	{
		printf("\nThe number is greater than 10!");
	}
	else if(num==10)
	{
		printf("\nJackpot!\nThe number is equal to 10!");
	}
	else
	{
		printf("The number is less than 10!");
	}
	
	return 0;
}
