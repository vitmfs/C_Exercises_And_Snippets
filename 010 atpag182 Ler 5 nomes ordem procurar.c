/*
	Name: 
	Copyright: 
	Author: 
	Date: 27-12-15 15:45
	Description: Progrma em C que l� 5 nomes e que pode escrever os nomes lidos pela ordemde introdu��o e pela ordem inversa, procurar
	um nome e sair. ; tem um bug
*/


#include <stdio.h>

int main()
{ 
    char nome[20][5];								//reservar espa�o para 5 nomes
    int i;											//vari�vel i para o ciclo for
    int op;											//vari�vel op��o para o switch
    char nomeproc[20];								//reservar espa�o para o nome procurado
    
    printf ("INTRODUZA 5 NOMES P.F.!\n\n");   
    
    for (i=0;i<sizeof(nome[1]);i++)					//ciclo para escrever os 5 nomes
    {
        printf ("Qual o %do nome?\n",(i+1));
        scanf("%s", &nome[i]);
    }
    
    do
    {
        printf ("\nOPCOES DISPONIVEIS:\n\n1. Escrever os 5 nomes\n2. Escrever inverso\n3. Procurar um nome\n0.Sair\n");
        printf ("\nQuero a opcao: ");
        scanf("%d",&op);
    }
    while ((op<0) || (op>3));


    
    while (op!=0)
    { 
          switch (op)
          {
              case 1:
              printf ("\nOs cinco nomes introduzidos por ordem foram:\n\n");
              for (i=0; i<sizeof(nome[1]);i++)
              printf ("%do nome = %s\n",(i+1),nome[i]);
              break;
              
              case 2:
              printf ("\nOs cinco nomes introduzidos por ordem inversa foram:\n\n");
              for (i=4; i>=0;i--)
              printf ("%do nome = %s\n",(i+1),nome[i]);
              break;
              
              case 3:
              printf ("Introduza um nome a procurar, p.f\n");
              scanf("\n%s",&nomeproc);
          
              i=0;
              
              while ((i<4) && (strcmp(nomeproc,nome[i])!=0))
              {
              	i++;
			  }
              
              if (strcmp(nomeproc,nome[i])==0)
              {
            	printf ("Encontrei na posicao %d!\n",i);
            	printf ("Foi o %do nome que introduziu!\n\n",i+1);
			  }
              else
              {
              	printf ("N�o encontrei!\n"); 
			  }
              
              break; 
          }
    
          do
          {
              printf ("\nOPCOES DISPONIVEIS:\n\n1. Escrever os 5 nomes\n2. Escrever inverso\n3. Procurar um nome\n0.Sair\n");
        	  printf ("\nQuero a opcao: ");
              scanf("%d",&op);
          }
          while ((op<0) || (op>3)); 

		
    }
    
    system ("pause"); 
}


