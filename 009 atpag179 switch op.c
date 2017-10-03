#include <stdio.h>
int main ()
{
    int i;
    int op;
    int soma;
    int x[5];
    
    printf ("Introduza 5 numeros, p.f\n");
    
    for (i=0; i<5;i++)
    {
        printf ("\nIntroduza o numero %d: ", (i+1));
        scanf("%d", &x[i]); 
    }
    
    do
    {
        printf ("\n1. Escrever os 5 numeros\n2. Escrever inverso\n3. Escrever Soma\n4. Escrever Media\n0. Sair\n\n"); 
        scanf("%d",&op);
    }
    while ((op<0)||(op>4));
    
    while (op!=0)
    { 
          switch(op)
          {
              case 1:
	              printf ("Os cinco numeros introduzidos foram:\n\n");
	              for(i=0;i<5;i++)
	              printf ("%d numero=%d\n\n",(i+1),x[i]);
              break;
              
              case 2:
	              printf ("Os cinco numeros introduzidos inversamente foram:\n");
	              for(i=4;i>=0;i--)
	              printf ("%d numero=%d\n\n",(i+1),x[i]);
              break;
              
              case 3:
	              soma=0;
	              for(i=4;i>=0;i--)
	              soma=soma+x[i];
	              printf ("A soma dos numeros=%d: \n",soma);
              break;
              
              case 4:
	              soma=0;
	              for(i=4;i>=0;i--)
	              soma=soma+x[i];
	              float media=(float) soma/5;
	              printf ("A media dos números=%f: \n",media);
              break;
          }

          do
          {
              printf ("1. Escrever os 5 numeros\n2. Escrever inverso\n3. Escrever Soma\n4. Escrever Media\n0. Sair\n"); 
              scanf("%d",&op);
          }
          while ((op<0) || (op>4));
    }
    
    
    system ("pause"); 
}
