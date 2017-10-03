#include<stdio.h>

int main()
{
    char s[20]="aula de algoritmia";
    char um='g';
    
    char *pos = strchr(s, um);
    
    
    if(pos)
    printf("%c encontrado em %s na posicao %d.\n",um, s,pos - s+1);
    else
    printf("%c nao encontrado em %s.\n",um, s);
    
    
    char dois='z';
    pos= strchr(s, dois);
    if (pos)
    printf(" %c encontrado em %s na posicao %d.\n",dois,s, pos - s+1);
    else
    printf("%c não encontrado em %s.\n",dois, s);

    system("pause");
}
