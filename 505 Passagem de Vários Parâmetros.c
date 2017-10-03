#include<stdio.h>

int multiplyTwoNumbers(int x, int y)
{
	return (x*y);
}

int main()
{
	int exit;
	exit= multiplyTwoNumbers(12, 7);
	printf("Exit is: %d\n", exit);
	return (0);
}
