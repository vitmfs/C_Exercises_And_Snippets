#include <stdio.h>
#include <strings.h>
int main()
{
    char texto[80];
    
    do
    {
         printf("Qual o texto?\n");
         gets(texto);
    }
    while(strcmp(texto,"")==0);
    
    int numVogais=0;
    char * vogais="aeiou";
    char *pos;
    char caracter;
    
    int tam=strlen(texto);
    int i;
    
    for(i=0;i<tam;i++)
    {
        caracter = texto[i];
        pos = strchr(vogais, caracter);
        if(pos)
        numVogais++;
    }
    
    printf("No texto %s ha %d vogais. \n\n",texto, numVogais);
    
    system ("pause");
}
