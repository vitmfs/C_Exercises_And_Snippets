#include<stdio.h>

int main()
{
    int i, x[5];
    char nome[20][5];
    
    printf("Introduza os 5 numeros, p.f.: \n");
    
    for(i=0; i<5;i++)
    {
        printf("\nIntroduza o numero %d: ", (i+1));
        scanf("%d", &x[i]);
    }
    
    printf("\nOs cinco numeros introduzidos foram: \n");
    
    for(i=0;i<5;i++)
    {
        printf("\n%d numero = %d\n", (i+1), x[i]);
    }   
    
    printf("\nOs cinco numeros introduzidos por inverso foram: \n");
    
    for (i=4;i>=0;i--)
    {
        printf("\n%d numero = %d\n", (i+1), x[i]);  
    }   
    
    int soma=0;
    
    for(i=0;i<5;i++)
    {
        soma=soma+x[i];
    }   
        
    float media=(float)soma/5;
    
    
    printf("\n\nA soma dos numeros vai ser: %d", soma);
    printf("\nA media dos numeros vai ser: %4.2f \n", media);
    
    
    system("pause");
    
}
    
