#include<stdio.h>

/*Multiplica 3 números*/
int multiplyThreeNumbers(float a, float b, float c)
{
	printf("%f", a*b*c);
	return (0);
}

int main()
{
	float x, y;
	x= 23.5;
	y= 12.9;
	
	multiplyThreeNumbers(x, y, 3.87);
	return (0);
}
