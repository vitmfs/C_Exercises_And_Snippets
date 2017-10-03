#include<stdio.h>
int main()
{
    char primNome[20];
    char ultNome[20];
    
    do
    {
        printf ("\nQual o 1o nome? ");
        scanf("%s",primNome);
    }
    while (strcmp(primNome,"")==0);

    do
    {
        printf ("\nQual o ultimo nome? ");
        scanf("%s",ultNome);
    }
    while (strcmp(ultNome,"")==0);
    
    printf ("\n%s, %s %s\n\n",ultNome, primNome, ultNome);

    system("pause");
}
