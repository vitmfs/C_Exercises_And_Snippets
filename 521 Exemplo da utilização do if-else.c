#include<stdio.h>

int main()
{
	int num;
	printf("Write a number: ");
	scanf("%d", &num);
	if(num==10)
	{
		printf("\nRight!");
		printf("\nThe number is 10!");
	}
	else
	{
		printf("\nWrong!\nThe number is different than 10!");
	}
	return 0;
	
}
