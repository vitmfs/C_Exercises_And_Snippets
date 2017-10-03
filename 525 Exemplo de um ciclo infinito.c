#include<stdio.h>

int main()
{
	int count;
	char ch;
	
	printf("Press a key <X to exit>");
	
	for(count=1;;count++)
	{
		scanf("%c", &ch);
		if(ch=='X') break;
		
		printf("\nThe Key is: %c", ch);
		scanf("%c", &ch);
	}
	
	return 0;
}
