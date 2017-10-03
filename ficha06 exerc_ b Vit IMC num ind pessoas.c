#include<stdio.h>

int main()
{
    char sexo;
    int peso, alt, npess=0, nabaixo=0, nnormal=0, nmarg=0, nacima=0, nobeso=0;
    float imc, somaimc, min_imc=999999999, max_imc=0, med_imc;
    
    do
    {
          printf("Insira o sexo da pessoa M/F (T para terminar): ");
          scanf("%c", & sexo);
    }
    while((sexo!='F')&&(sexo!='f')&&(sexo!='M')&&(sexo!='m')&&(sexo!='T')&&(sexo!='t'));
    
    while(sexo!='T' && sexo!='t')
    {
        do
        {
            printf("\n\nInsira o peso da pessoa (Kg): ");
            scanf("%d", &peso);
        }
        while(peso<=0);
        
    
        do
        {
            printf("\n\nInsira a altura pessoa (cm): ");
            scanf("%d", &alt);
        }
        while(alt<=0);
        
        npess++;
        
        imc=(float)peso/pow(alt,2)*10000;
        printf("IMC=%f",imc);
        somaimc=imc+somaimc;
        
        if(imc<min_imc)
        imc=min_imc;
        
        if(imc>max_imc)
        imc=max_imc;
        
        med_imc=(float)somaimc/npess;
        
        
        if((sexo=='F')||(sexo=='f'))
        {printf("Helolo!");
            if (imc<19,1)
            {printf("Mulher abaixo do peso!"); nabaixo++;}
            else if (imc<25,8)
            {printf("Mulher no peso normal!"); nnormal++;}
                 else if(imc<27,3)
                 {printf("Mulher marginalmente acima do peso!"); nmarg++;}
                      else if(imc<32,3)
                      {printf("Mulher acima do peso ideal!"); nacima++;}
                           else
                           {printf("Mulher obesa!"); nobeso++;}}
        else if((sexo=='M')||(sexo=='m'))
            if (imc<20,7)
            {printf("Homem abaixo do peso!"); nabaixo++;}
            else if (imc<26,4)
            {printf("Homem no peso normal!"); nnormal++;}
                 else if(imc<27,8)
                 {printf("Homem marginalmente acima do peso!"); nmarg++;}
                      else if(imc<31,1)
                      {printf("Homem acima do peso ideal!"); nacima++;}
                           else
                           {printf("Homem obeso!"); nobeso++;}
               sexo='X';            
       do
       {
          printf("\n\nInsira o sexo da pessoa M/F (T para terminar): ");
          scanf("%c", &sexo);
       }
       while((sexo!='F')&&(sexo!='f')&&(sexo!='M')&&(sexo!='m')&&(sexo!='T')&&(sexo!='t'));
        
        
    
    
    }
    
    
    system("pause");
}
