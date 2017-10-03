#include<stdio.h>

int main()
{
	char str[10]= "Jonas";									//"Jonas" é uma String constante; str é uma String variável
	printf("\n\nString: %s", str);
	printf("\n\nSecond letter: %c", str[1]);
	str[1]= 'U';
	printf("\n\nNow the second letter is: %c", str[1]);
	printf("\n\nFinal String is: %s", str);					//%s significa que printf() deve imprimir uma String no ecrâ
	return (0);
}
