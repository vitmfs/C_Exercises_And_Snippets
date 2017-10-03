#include<stdio.h>

int main()
{
	int i, j;
	printf("Write two numbers (0-9): \n");
	scanf("%d%d", &i, &j);
	printf("\n%d == %d is %d", i, j, i==j);
	printf("\n%d != %d is %d", i, j, i!=j);
	printf("\n%d <= %d is %d", i, j, i<=j);
	printf("\n%d >= %d is %d", i, j, i>=j);
	printf("\n%d < %d é %d", i, j, i<j);
	printf("\n%d > %d é %d", i, j, i>j);
	
	return (0);
	
	
}
