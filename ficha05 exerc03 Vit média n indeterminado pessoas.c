#include<stdio.h>
int main()
{
    int idade;
    int soma=0;
    int i=0;
    
    do
    {
        printf("Qual a idade da 1a pessoa? (0 para terminar)  ");
        scanf("%d", &idade);
    }
    while(idade<0);
    
    while(idade!=0)
    {
                   soma=soma+idade;
                   i=i+1;
                   do
                   {
                         printf("Qual a idade da %d pessoa (0 para terminar)  ", i+1);
                         scanf("%d", &idade);
                   }
                   while(idade<0||idade>120);
    }
    
    if(i>0)
    {
           float media=(float)soma/i;
           printf("\n A media de idades vai ser %4.2f ", media);}
           else
           printf("\nNao foram processadas pessoas \n\n ");
    
    system("pause");
}
