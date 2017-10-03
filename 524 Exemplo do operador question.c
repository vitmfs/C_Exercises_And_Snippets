#include<stdio.h>

int main()
{
	int index= 0, counter;
	char letras[5]= "Joao";
		
	for(counter=0;counter<1000;counter++)
	{
		printf("%c", letras[index]);
		index==3?index=0:++index;	
	}
	
	return 0;
	
}
