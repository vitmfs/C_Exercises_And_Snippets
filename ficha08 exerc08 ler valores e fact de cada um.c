#include<stdio.h>

int main()
{
    
    int num;
    int fac;
    int i;
    
    
    do
    {
        printf("\nIntroduzir numero(0 para terminar): ");
        scanf("%d", &num);
    }
    while (num<0);
        
    while(num!=0)
    {
    
     fac = 1;
    
     for(i=1;i<=num;i++)
     fac=fac*i;
    
     printf("\n%d!=%d \n",num,fac);
    
    
     do
     {
        printf("\nIntroduzir numero(0 para terminar): ");
        scanf("%d", &num);
     }
     while (num<0);
     
    }
    
    
    system("pause");
    
}
    
