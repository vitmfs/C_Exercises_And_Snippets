#include<stdio.h>

int main()
{
    char sexo;
    int peso, alt,  nabaixo=0, nnormal=0, nmarg=0, nacima=0, nobeso=0, npess=0;
    float imc, max_imc=0, min_imc=100, somaimc=0;
    
    do
    {
         printf("\nInsira o sexo da pessoa (M)asculino, (F)eminino, (T)erminar: ");
         scanf("%c", &sexo);
    }
    while((sexo!='F')&&(sexo!='f')&&(sexo!='M')&&(sexo!='m')&&(sexo!='T') && (sexo!='t'));
    
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
        
        
        imc=(float)peso/pow(alt,2)*10000;
        
    printf("\nIMC=%4.2f \n\n",imc);
    
    if((sexo=='F')||(sexo=='f'))
       
            if (imc<19.1)
            {printf("Mulher abaixo do peso! \n");nabaixo++;}
            else if (imc<25.8)
            {printf("Mulher no peso normal! \n"); nnormal++;}
                 else if(imc<27.3)
              {   printf("Mulher marginalmente acima do peso! \n"); nmarg++;}
                      else if(imc<32.3)
               {       printf("Mulher acima do peso ideal! \n"); nacima++;}
                           else
                {           printf("Mulher obesa! \n");nobeso++;}
        else if((sexo=='M')||(sexo=='m'))
            if (imc<20.7)
           { printf("Homem abaixo do peso! \n"); nabaixo++;}
            else if (imc<26.4)
           { printf("Homem no peso normal! \n"); nnormal++;}
                 else if(imc<27.8)
                 {printf("Homem marginalmente acima do peso! \n");  nmarg++;}
                      else if(imc<31.1)
                      {printf("Homem acima do peso ideal! \n"); nacima++;}
                           else
                          { printf("Homem obeso! \n"); nobeso++;}
    somaimc=somaimc+imc;
    npess++;
      if(imc<min_imc)
        imc=min_imc;
        
        if(imc>max_imc)
        imc=max_imc;
    
     do
    {
         printf("\nInsira o sexo da pessoa (M)asculino, (F)eminino, (T)erminar: ");
         scanf("%c", &sexo);
    }
    while((sexo!='F')&&(sexo!='f')&&(sexo!='M')&&(sexo!='m')&&(sexo!='T') && (sexo!='t'));
}
   float med_imc=(float)somaimc/npess;
   printf("\nMedia dos imcs calculados= %4.2f ", med_imc);
printf("\nHá %d pesoas peso abaixo", nabaixo);
printf("\nHá %d pesoas peso normal", nnormal);
printf("\nHá %d pesoas peso pouco acima", nmarg);
printf("\nHá %d pesoas peso acima", nacima);
printf("\nHá %d pesoas peso de obeso", nobeso);
printf("\nIMC máximo=%4.2f", max_imc);
printf("\nIMC minimo=%4.2f", min_imc);
    system("pause");
}
