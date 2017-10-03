#include<stdio.h>

int main()
{
	int option;
	
	while(option!=5)
	{
		printf("\nChoose a number between 1 and 5: \n");
		scanf("%d", &option);
		
		if(option<1||option>5)
		{
			continue;										//voltar ao início do ciclo
		}
		
		switch(option)
		{
			case 1: printf("\nOption 1"); break;
			case 2: printf("\nOption 2"); break;
			case 3: printf("\nOption 3"); break;
			case 4: printf("\nOption 4"); break;
			case 5: printf("\nOption 5"); break;
		}
	}
	
	return 0;
}
