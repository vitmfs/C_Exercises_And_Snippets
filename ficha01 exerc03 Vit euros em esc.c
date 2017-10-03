#include<stdio.h>
int main()
{
    int euros;
    
    do
    {
        printf("Inserir valor em euros p.f.:  ");
        scanf("%d", &euros);
    }
    while(euros<0);
    
    float esc=(float)200.482*euros;
    
    printf("\n\n%d euros = %4.2f escudos\n\n\n", euros, esc);
    
    system("pause");
}
