#include<stdio.h>

int main()
{
	int num;
	printf("Press a number key: ");
	scanf("%d", &num);
	if(num>10)
	{
		printf("\n\nThe number is more than 10!");
	}
	if(num==10)
	{
		printf("\n\nYou Win! ");
		printf(" The number is 10");
	}
	if(num<10)
	{
		printf("\n\nThe number is less than 10!");
	}
	return (0);
	
}
