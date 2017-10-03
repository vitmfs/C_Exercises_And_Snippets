#include <stdio.h>
#include <strings.h>
int main ()
{
    char texto[80];
    
    do
    {
         printf("Qual o texto ");
         gets(texto);
    }
    while(strcmp(texto,"")==0);
    
    char texto2[80];
    strcpy(texto2,texto);
    int numeroPalavras=0;
    char * palavra;
    palavra = strtok(texto, " ");
    while(palavra != NULL)
    {
        numeroPalavras ++;
        palavra = strtok (NULL, " ");
    }
    printf("No texto %s ha %d palavras. \n\n",texto2, numeroPalavras);
    
    system ("pause");
}
