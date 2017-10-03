#include<stdio.h>
int main()
{
    int qtpess;
    
    do
    {
        printf("\nQuantas pessoas? ");
        scanf("%d", &qtpess);
    }
    while(qtpess<=0);
    
    int idade;
    int soma=0;
    int i;
    
    for(i=1;i<=qtpess;i++)
    {
         do {
                printf("\nQual a idade da %d pessoa? ", i);
                scanf("%d", &idade);
            }
         while(idade<0||idade>120);
         soma=soma+idade;
    }   
    
    float media=(float)soma/qtpess;
    printf("\nA media de idades vai ser %4.2f anos \n\n ", media);
    
    
                                   
    
    system("pause");
}
