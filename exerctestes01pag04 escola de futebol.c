#include <stdio.h>
int main()
{
    int Idade;
    int Irmaos;
    float Mes;
    int Insc;
    
    printf("Qual a idade do Atleta?");
    scanf("%d",&Idade);
    
    printf("Quantos irmaos tem inscritos na escola ABC?");
    scanf ("%d",&Irmaos);
    printf("\n");
    
    if (Idade<=11)
    {Mes=30; Insc=30;}
    else
    {Mes=40;}
    
    if (Idade>13)
    {Insc=40;}
    else
    {Insc=30;}
    if (Irmaos>1)
    Mes=Mes*0,5;
    else
    if(Irmaos ==1)
    Mes=Mes*0,75;
    float inicio=Insc+Mes;
    printf("Mes inicial paga %2.0f euros, nos restantes pagara %2.0f euros.",Mes+Insc,Mes);
    printf("\n");
    
    system ("pause");
}
