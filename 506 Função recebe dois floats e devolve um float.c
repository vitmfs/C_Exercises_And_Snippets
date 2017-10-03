#include<stdio.h>

float multiplyTwoDecimalNumbers(float x, float y)
{
	return (x*y);
}

int main()
{
	float exit;
	exit= multiplyTwoDecimalNumbers(45.2, 0.0067);
	printf("Exit is: %f\n", exit);
	return (0);
}
