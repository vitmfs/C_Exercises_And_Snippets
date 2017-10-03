#include <stdio.h>
int main ()
{
    int num,qt,valor,i,max=0,numMax,qts=0,vls=0;
    int Ts=0,Me=0,Ca=0;
    char art[2];
    
    do
    {
         printf ("\nIntroduza o numero do socio: ");
         scanf("%d",&num);
    }
    while (num<0);
    
    while (num!=0)
    {
        do
        {
            printf ("\nQuantos artigos vai comprar?");
            scanf("%d",&qt);
        }
        while (qt<0);
        
        valor=0;
        
        for (i=0;i<qt;i++)
        {
            do
            {
                printf ("\nQual o artigos (T)shit, (C)alção ou (M)eia?");
                scanf("%s",&art);
            }
            while (strcmp(art,"T")!=0 && strcmp(art,"C")!=0 && strcmp(art,"M")!=0);
            
            if (strcmp(art,"T")==0)
            {valor=valor+20; Ts++;}
            else if (strcmp(art,"C")==0)
            {valor=valor+10; Ca++;}
            else
            {valor=valor+5; Me++;}
        }
 
        qts++;
        vls=vls+valor;
        
        printf ("\nO Atleta %d paga %d euros.", num, valor);
        if (max<valor)
        {max=valor; numMax=num;}
        
        do
        {
            printf ("\nIntroduza o numero do socio: ");
            scanf("%d",&num);
        }
        while (num<0);

    }
    
    printf ("\nO Atleta que mais pagou foi o %d: pagou %d euros", numMax, max);
    float vmedio=(float)vls/qts;
    printf ("\nValor medio por compra = %4.2f euros",vmedio);
    printf ("\nVenderam-se %d Tshits, %d meias e %d calçoes", Ts,Me,Ca);
    
    system("pause");
}
