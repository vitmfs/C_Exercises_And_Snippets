#include <stdio.h>
#include <strings.h>
int main ()
{
char texto[80];
do
{printf("Qual o texto ");
gets(texto);}
while(strcmp(texto,"")==0) ;
int ocorrencias[26];
int i;
for(i=0;i<26;i ++)
ocorrencias[i]=0;
int j;
char alfa[26]="abcdefghijklmnopqrstuvwxyz";
char vogais[5]="aeiou";
char *delimitadores=" ";
char textoinicial[80];
strcpy(textoinicial, texto);
int tam = strlen(texto);
int qt=0, qtv=0;
char *pos;
char *pos1;
char *pos2;
char * palavra = strtok(texto, delimitadores);
while (palavra != NULL)
{ qt++;
if (strlen(palavra)>1) {
pos1 = strchr(alfa, palavra[0]);
pos2 = strchr(alfa, palavra[strlen(palavra)-1]);
if (pos1==pos2)
ocorrencias[pos1-alfa]++;
pos = strchr(vogais, palavra[0]);
if (pos>0)
qtv++;
}
palavra = strtok (NULL, " ");}
printf("\n");
printf("\nHa %d palavras no texto.\n",qt);
printf("\n");
printf("A comecar e a acabar por:\n");
for(i=0;i<26;i ++)
if (ocorrencias[i]!=0)
printf("%c -> %d\n",alfa[i],ocorrencias[i]);
printf("\nHa %d palavras comecadas por vogais no texto %s.\n",qtv,textoinicial);
printf("\n");
system ("pause");
}
