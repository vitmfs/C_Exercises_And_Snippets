#include<stdio.h>
int main()
{
    char sexo, nome[20];
    int idd, ate10=0, ate18=0,ate65=0,mais65=0, npess=0;
    float quota, somaquotas=0, media;
    
    
    do
    {
         printf("Insira o sexo da pessoa (M)asculino, (F)eminino, (T)erminar: ");
         scanf("%c", &sexo);
    }
    while((sexo!='F')&&(sexo!='f')&&(sexo!='M')&&(sexo!='m')&&(sexo!='T')&&(sexo!='t'));
    
     while(sexo!='T' && sexo!='t')
    {
         do
         {
             printf("\nInsira o nome do Socio: ");
             scanf("%s", &nome);
         }
         while(strcmp(nome,"")==0);
        

        do
        {
            printf("\nInsira a idade do socio: ");
            scanf("%d", &idd);
        }
        while(idd<=0);
        
        npess++;
        
        if(idd<10)
        {quota=2.5, ate10++;}
        else if(idd<18)
        {quota=12, ate18++;}
        else if(idd<65)
        {
             if(sexo=='M')
             {quota=18;}
             else
             {quota=15;}
              
             ate65++;
        }
        else
        {quota=10, mais65++;}
        
        somaquotas=somaquotas+quota;
        
        printf("\n\n O %s vai pagar %4.2f de quota mensal!\n\n", nome, quota);
        
        
         do
         {
            printf("\nInsira o sexo da pessoa (M)asculino, (F)eminino, (T)erminar: ");
            scanf("%c", &sexo);
         }
         while((sexo!='F')&&(sexo!='f')&&(sexo!='M')&&(sexo!='m')&&(sexo!='T')&&(sexo!='t'));
        
 
    }
    
         media=(float)somaquotas/npess;
         
         
         float perc10=(float)100*ate10/npess;
         float perc18=(float)100*ate18/npess;
         float perc65=(float)100*ate65/npess;
         float perc100=(float)100*mais65/npess;
         
         
         printf("\n\nA media de quotas vai ser %4.2f euros", media);
         printf("\n\nExistem  %d  tipo de socio infantil ( %4.2f )por cento ", ate10, perc10);
         printf("\n\nExistem  %d  tipo de socio junior ( %4.2f )por cento  ", ate18, perc18);
         printf("\n\nExistem  %d  tipo de socio adulto ( %4.2f )por cento  ", ate65, perc65);
         printf("\n\nExistem  %d  tipo de socio senior ( %4.2f )por cento  \n\n", mais65, perc100);
    

    
    system("pause");
    
}
    

