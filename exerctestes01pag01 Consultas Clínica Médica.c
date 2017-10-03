#include<stdio.h>
int main()
{
    char cons[20];
    int idd;
    float paga;
    
    do
    {
          printf("Qual a consulta pretendida? ");
          scanf("%s", &cons);
    }
    while((strcmp(cons,"Oftalmologia")!=0)&&(strcmp(cons,"Psiquiatria")!=0)&&(strcmp(cons,"Cardiologia")!=0)&&(strcmp(cons,"Dermatologia")!=0));
    
    do
    {
         printf("\nQual a idade do paciente? ");
         scanf("%d", &idd);
    }
    while(idd<0||idd>120);
    
    if(strcmp(cons,"Oftalmologia")==0)
    {paga=80;}
    else if(strcmp(cons,"Psiquiatria")==0)
    {paga=95;}
    else
    {paga=75;}
    
    if(idd<12)
    {paga=paga*0.85;}
    else if(idd>=65)
    {paga=paga*0.75;}
    
    printf("\nO cliente de %d anos, pediu a consulta de %s e vai pagar %4.2f euros! \n\n", idd, cons, paga);
                                                                                                                                                
    
    
    
    
    
    
    
    
    
    
    
    
    
    system("pause");
    
}
