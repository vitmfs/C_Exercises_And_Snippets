#include<stdio.h>
int main()
{
    char primNome[20];
    char ultNome[20];
    do
    {
        printf ("\nQual o primeiro nome? ");
        scanf("%s",&primNome);
    }
    while(strcmp(primNome,"")==0);
    
    do
    {
        printf ("\nQual o ultimo nome? ");
        scanf("%s",&ultNome);
    }
    while(strcmp(ultNome,"")==0);
    
    char todoNome[40]="";
    strcat(todoNome,ultNome);
    strcat(todoNome,", ");
    strcat(todoNome, primNome);
    strcat(todoNome," ");
    strcat(todoNome, ultNome);
    
    printf("\nNome Novo = %s\n\n",todoNome);

    system("pause");
}
