#include <stdio.h>
int main ()
{ 
    char nome[20][5];
    int i;
    int op;
    char nomeproc[20];
    
    printf ("Introduza 5 nomes, p.f\n");
    for (i=0;i<5;i++)
    {
        printf ("Qual o %d nome?",(i+1));
        scanf("\n%s",&nome[i]);
    }
    
    do
    {
        printf ("1. Escrever os 5 nomes\n 2. Escreverinverso\n 3. Procurar um nome\n 0.Sair");
        scanf("%d",&op);
    }
    while ((op<0) || (op>3));
    
    while (op!=0)
    {
          switch (op)
          {
              case 1:
              printf ("Os cinco nomes introduzidos foram:\n");
              for (i=0; i<5;i++)
              printf ("%d nomes=%s\n",(i+1),nome[i]);
              break;
              
              case 2:
              printf ("Os cinco nomes inverso foram:\n");
              for (i=4; i>=0;i--)
              printf ("%d nomes=%s\n",(i+1),nome[i]);
              break;
              
              case 3:
              printf ("Introduza um nome a procurar, p.f\n");
              scanf("\n%s",&nomeproc);
              i=0;
              while ((i<4) && (strcmp(nomeproc,nome[i])!=0))
              i++;
              if (strcmp(nomeproc,nome[i])==0)
              printf ("Encontrei na posicao %d!\n",i);
              else
              printf ("Não encontrei!\n"); break; 
          }
          
          do
          {
              printf ("1. Escrever os 5 nomes\n 2. Escrever inverso\n 3. Procurar um nome\n 0.Sair");
              scanf("%d",&op);}
              while ((op<0) || (op>3)); 
    }
    
    system ("pause"); 
}
