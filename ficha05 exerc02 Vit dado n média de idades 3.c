#include<stdio.h>
int main()
{
    int npess;
    
    {
        do
        {
        printf("Insira o num. de pessoas, p.f. : ");
        scanf("%d", &npess);
        }
        while(npess<=0);
    }
    
    int idade;
    int i;
    int soma=0;
    
    for(i=1;i<=npess;i++)
    {
        do
        {
               printf("Insira a idade da %d pessoa p.f. : ", i);
               scanf("%d", &idade);
        }
        while(idade<=0||idade>120);
        soma=soma+idade;
    }
    
    float media=(float)soma/npess;
    
    printf("\nA media das idades vai ser: %4.2f \n\n", media);
               
    
    
    system("pause");
}
        
