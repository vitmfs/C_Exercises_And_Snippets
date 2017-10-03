#include<stdio.h>

int main()
{
	int t;
	
	for(t=1;t<100;t++)
	{
		int count= 1;
		
		for(;;)
		{
			printf("\n%d", count);
			count++;
			if(count==10) break;
		}
	}
	
	return 0;
}
