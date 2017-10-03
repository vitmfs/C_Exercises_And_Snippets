#include<stdio.h>
int main()
{
    char texto[80];
    char palavras[80][20];
    int ocorrencias[80];
    char * palavra;
    char *delimitadores=" ";
    int i;
    int numeroPalavras=0;
    do
    {
        printf("Qual o texto ");
        gets(texto);
    }
    while(strcmp(texto,"")==0);
    
    palavra = strtok(texto, delimitadores);
    
    while (palavra != NULL)
    {
        strcpy(palavras[numeroPalavras],palavra);
        i = 0;
        while(strcmp(palavras[i],palavra)!=0)
        i++;
        if(i==numeroPalavras)
        {
            ocorrencias[numeroPalavras]=1;
            numeroPalavras ++;
        }
        else
        ocorrencias[i]++;
        palavra = strtok (NULL, " ");
    }
    for(i=0;i<numeroPalavras;i ++)
    printf("A palavra %s ocorre %d vezes \n",palavras[i],ocorrencias[i]);
    
    system("pause");
}
