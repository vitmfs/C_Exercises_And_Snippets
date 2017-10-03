#include<stdio.h>
int main()
{
    int temp;
    
    printf("Insira a temp. em Celsius:  ");
    scanf("%d", &temp);
    
    if (temp<5)
    printf("\nMuito Frio\n\n");
    else if (temp<10)
    printf("\nFrio\n\n");
    else if (temp<20)
    printf("\nAmeno\n\n");
    else if (temp<30)
    printf("\nQuente\n\n");
    else
    printf("\nMuito Quente\n\n");
    
    system("pause");
}
    
