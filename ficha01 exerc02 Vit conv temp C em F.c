#include<stdio.h>
int main()
{
    int tempC;
    
    do
    {
        printf("Insira a temp. em Celsius p.f.:   ");
        scanf("%d", &tempC);
    }
    while(tempC<0);
    
    float tempF=(float)9/5*tempC+32;
    
    printf("\nA temp. em Fahrenheit vai ser %4.2f\n\n", tempF);
    
    system("pause");
}
