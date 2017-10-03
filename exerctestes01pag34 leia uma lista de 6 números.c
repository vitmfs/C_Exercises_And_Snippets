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
    while(strcmp(texto,"")==0) ;
    int ocorrencias[26];
    int i;
    for(i=0;i<26;i ++)
    ocorrencias[i]=0;
    int j;
    char alfa[26]="abcdefghijklmnopqrstuvwxyz";
    char *delimitadores=" ";
    char textoinicial[80];
    strcpy(textoinicial, texto);
    int tam = strlen(texto);
    printf("\nO texto com as palavras invertidas");
    printf("\n=\n");
    int qt=0;
    char *pos;
    char * palavra = strtok(texto, delimitadores);
    while (palavra != NULL)
    { 
          qt++;
          pos = strchr(alfa, palavra[0]);
          if (pos)
          ocorrencias[pos-alfa]++;
          for (j=strlen(palavra)-1;j>=0;j--)
          printf("%c",palavra[j]);
          printf(" ");
          palavra = strtok (NULL, " ");
    }
    
    printf(".\n");
    printf("\nHa %d palavras no texto %s.\n",qt,textoinicial);
    printf("\n");
    for(i=0;i<26;i ++)
    if(ocorrencias[i]!=0)
    printf("Ha %d palavras começadas por %c \n",ocorrencias[i],alfa[i]);
    
    system ("pause");
}
