#include <stdio.h>
#include <string.h>
int main ()
{
    int F=0;
    int D=0;
    int Max=0;
    int Dia,Qts, Dmax;
    char Aula[20],Amax[20];
    
    for (Dia=2;Dia<=7;Dia++)
    {
        if (Dia!=7)
        printf("\nAulas para %d� feira.", Dia);
        else
        printf("\nAulas para S�bado.");
        
        do 
        {
            printf( "\nAula?");
            scanf("%s",&Aula);
        }
        while (strcmp(Aula,"")==0);
        
        while (strcmp(Aula,"nada")!=0)
        {
            do
            {
                printf("\nQuantas pessoas?");
                scanf("%d",&Qts);
            }
            while (Qts<0);
            
            if (Qts>20)
            {
                printf("%s", Aula);
                
                if (Dia!=7)
                printf("\n%s %d� feira DUPLICAR",Aula, Dia);
                else printf("\n%s S�bado DUPLICAR",Aula);
                
                D++;
            }
            
            else if(Qts<5)
            {
                if (Dia!=7)
                printf("\n%s %d� feira FECHAR",Aula, Dia);
                else printf("\n%s S�bado FECHAR", Aula);
                F++;
            }
            
            if (Qts>Max)
            {
                Max=Qts;
                strcpy(Amax,Aula);
                Dmax=Dia;
            }
            
            do
            {
                printf( "\nAula?");
                scanf("%s",&Aula);
            }
            while (strcmp(Aula,"")==0);
        }
   }
   
   printf ("\n***RESUMO SEMANA****");
   printf("\n%d aulas a DUPLICAR", D);
   printf("\n%d aulas a FECHAR", F);
   
   if (Dmax!=7)
   printf("\nM�ximo: %s %d � feira com %d,",Amax, Dmax, Max);
   else printf("\nM�ximo: %s S�bado com %d", Amax, Max);
   
   system ("pause");
}
