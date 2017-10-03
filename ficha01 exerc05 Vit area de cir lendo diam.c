#include<stdio.h>
int main()
{
    float diam;
    
    do
    {
        printf("Insira o diametro do circulo:  ");
        scanf("%f", &diam);
    }
    while(diam<0);
    
    float area=(float)3.14*pow(diam/2,2);
    
    printf("\nA area do circulo vai ser:  %0.2f\n\n", area);
    system("pause");
}
