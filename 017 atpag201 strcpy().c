#include<stdio.h>
int main()
{
    char nome[20] = "Jose Santos";
    char v[20];
    strcpy(v,nome);
    
    printf("Copiei o nome(%s) para v(%s)\n\n", nome, v);

    system("pause");
}
