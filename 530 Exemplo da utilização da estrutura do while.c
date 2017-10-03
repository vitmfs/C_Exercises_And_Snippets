#include<stdio.h>

int main()
{
	int i;
	
	do
	{
		printf("Choose a car by number: ");
		printf("\n(1) Fiat");
		printf("\n(2) Mercedes");
		printf("\n(3) BMW\n");
		
		scanf("%d", &i);
	}
	while(i<1||i>3);
	
	switch(i)
	{
		case 1: printf("\nYou chose the Fiat model!"); break;
		case 2: printf("\nYou chose the Mercedes model!"); break;
		case 3: printf("\nYou chose the BMW model!"); break;
	}
	
	return 0;
}
