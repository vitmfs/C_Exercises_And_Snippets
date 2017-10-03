#include <stdio.h>
int main ()
{
    int a, b, c, d;
    
    do
    {
        printf("Qual o valor de a?");
        scanf("%d",&a);
    }
    while (a<=0);
    
    do
    {
        printf("Qual o valor de b?");
        scanf("%d",&b);
    }
    while (b<a);
    
    do
    {
        printf("Qual o valor de c?");
        scanf("%d",&c);
    }
    while (c<=0);
    
    do
    {
        printf("Qual o valor de d?");
        scanf("%d",&d);
    }
    while(d<c);
    
    int x, y, k, Fact, soma, fxy;
    
    for(x=a; x<=b; x=x+2)
    {
        Fact=1;
        
        for(k=1; k<=x;k++)
        Fact=Fact*k;
        
        for(y=c; y<=d; y++)
        {
            soma=0;
            for (k=1;k<=y;k++)
            soma=soma+k;
            fxy=Fact*soma;
            printf ("\nF(%d,%d)=%d",x,y,fxy);
        }
    }
    
    system ("pause");
}
