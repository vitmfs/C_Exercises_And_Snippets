#include<stdio.h>

int main()
{
	int num;
	printf("Write a number: ");
	scanf("%d", &num);
	
	if(num>10)
	{
		printf("The number is greater than 10!");
	}
	if(num==10)
	{
		printf("The number is equal to 10!");
	}
	if(num<10)
	{
		printf("The number is less than 10!");
	}
	
	return 0;
	
}
