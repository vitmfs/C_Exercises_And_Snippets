#include<stdio.h>

int main()
{
	int num;
	printf("Write a number: ");
	scanf("%d", &num);
	
	switch(num)
	{
	
		case 9: printf("\nThe number is equal to 9!"); break;
		case 10: printf("\nThe number is equal to 10!"); break;
		case 11: printf("\nThe number is equal to 11!"); break;
		default: printf("\nThe number is not equal to 9 or 10 or 11!");
	}
	
	return 0;
	
	
}
