#include<stdio.h>

int main()
{
	int num;
	printf("Press a number key (0-9): ");
	scanf("%d", &num);
	if(num==10)
	{
		printf("\nRight!\nThe number is equal to 10!");
	}
	else
	{
		if(num>10)
		{
			printf("\nThe number is greater to 10!");
		}
		else
		{
			printf("\nThe number is less to 10!");
		}
	}
	
	return 0;
}
