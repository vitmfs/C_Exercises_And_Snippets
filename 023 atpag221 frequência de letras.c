#include <stdio.h>
#include <strings.h>
int main ()
{
    char texto[80];
    int ocorrencias[26];
    char alfa[26]="abcdefghijklmnopqrstuvwxyz";
    
    do
    {
         printf("Qual o texto ");
         gets(texto);
    }
    while(strcmp(texto,"")==0);
    int i;
    for(i=0;i<26;i++)
    ocorrencias[i]=0;
    char *pos;
    char caracter;
    int tam = strlen(texto);
    for(i=0;i<tam;i++)
    {
        caracter = texto[i];
        pos=strchr(alfa, caracter);
        if (pos)
        ocorrencias[pos-alfa]++;
    }
    
    for(i=0;i<26;i ++)
    if(ocorrencias[i]!=0)
    
    printf("A letra %c ocorre %d vezes \n",alfa[i],ocorrencias[i]);
    
    system("pause");
}
