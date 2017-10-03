#include<stdio.h>
int main()
{
    int numpess;
    
    {
    do
        {
        printf("Quantas pessoas? ");
        scanf("%d", &numpess);
        } 
        while(numpess<=0);
    }
    
    int idade;
    int i;
    int soma=0;
    
    for(i=1;i<=numpess;i++)
    {
                          do
                          {
                              printf("\nInsira a idade da %d pessoa: ", i);
                              scanf("%d", &idade);
                          }   
                          while(idade<=0||idade>120);
                          soma=soma+idade;
    }
    
    float media=(float)soma/numpess;
    
    printf("\nA media das idades vai ser %4.2f \n\n ", media);
    
    
    system("pause");
}  
