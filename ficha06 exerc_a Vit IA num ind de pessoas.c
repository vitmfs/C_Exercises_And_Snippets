#include<stdio.h>
int main()
{
    char nome[20];
    int cc;
    
    
    do
    {
        printf("Qual o nome do proprietario?  ");
        scanf("%s", &nome);
    }
    while(strcmp(nome," ")!=0);
    
    system("pause");
}
