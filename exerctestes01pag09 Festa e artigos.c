#include <stdio.h>
#include <string.h>
int main ()
{
    int i;
    char nome[20];
    char tipo[2];
    int valor;
    int AB;
    int AC;
    int AE;
    int AVB;
    int AVC;
    int AVE;
    int TAB=0;
    int TAC=0;
    int TAE=0;
    int TAVB=0;
    int TAVC=0;
    int TAVE=0;
    int MaxArt=-1;
    char maxAN[20];
    int MaxValor=-1;
    char maxAV[20];
    
    for(i=0; i<5;i++)
    {
        do
        {
            printf ("\nIntroduza o nome: ");
            scanf("%s",&nome);
        }
        while (strcmp(nome, "")==0);
        
        AB=0;
        AC=0;
        AE=0;
        AVB=0;
        AVC=0;
        AVE=0;
        
        do
        {
            printf ("\nIntroduza o artigo (B)ebida, (C)omida, (E)xtra, (F)im ");
            scanf("%s",&tipo);
        }
        while(strcmp(tipo,"B")!=0 && strcmp(tipo,"C")!=0 && strcmp(tipo,"E")!=0 &&strcmp(tipo,"F")!=0);
        
        while (strcmp(tipo,"F")!=0)
        {
            do
            {
                printf ("\nIntroduza o valor");
                scanf("%d",&valor);
            }
            while (valor<=0);
            
            if(strcmp(tipo,"B")==0)
            {AB++; AVB=AVB+valor;}
            else if (strcmp(tipo,"C")==0)
            {AC++; AVC=AVC+valor;}
            else
            {AE++; AVE=AVE+valor;}
            
            do
            {
                printf ("\nIntroduza o artigo (B)ebida, (C)omida, (E)xtra, (F)im ");
                scanf("%s",&tipo);
            }
            while (strcmp(tipo,"B")!=0 && strcmp(tipo,"C")!=0 && strcmp(tipo,"E")!=0 &&strcmp(tipo,"F")!=0);
        }
        
        
        printf ("\nO %s levou %d artigos", nome,AB+AC+AE );
        
        if (AVB>0)
        printf ("\n%d bebida %d euros", AB, AVB);
        if (AVC>0)
        printf ("\n%d comida %d euros", AC, AVC);
        if (AVE>0)
        printf ("\n%d extra %d euros", AE, AVE);
        printf ("\n%Total %d euros\n", (AVB+AVC+AVE));
        if (MaxArt<(AB+AC+AE))
        {MaxArt=AB+AC+AE; strcpy(maxAN, nome);}
        if (MaxValor<(AVB+AVC+AVE))
        {MaxValor=AVB+AVC+AVE; strcpy(maxAV, nome);}
        TAB=TAB+AB;
        TAC=TAC+AC;
        TAE=TAE+AE;
        TAVB=TAVB+AVB;
        TAVC=TAVC+AVC;
        TAVE=TAVE+AVE;
        
        
    }
    
    printf ("\nO %s foi quem levou mais artigos: %d.\n", maxAN,MaxArt);
    printf ("\nO %s foi quem levou mais em valor: %d.\n", maxAV,MaxValor);
    printf ("\n%d bebida, %d comida e %d extra, respetivamente %d, %d e %d euros.\n", TAB, TAC, TAE, TAVB, TAVC, TAVE);
    
    system("pause"); 
}
