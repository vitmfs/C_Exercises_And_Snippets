#include<stdio.h>
int main()
{
    int i, npess, peso, alt, nM, nH, nabaixo=0, nnormal=0,nmarg=0,nacima=0, nobeso=0;
    float imc, imcmax=0, imcmin=999999999; 
    char sexo[2];  /*Para fazermos strcmp tem que ser a uma string e não a um caracter*/
    
    do
    {
          printf("Insira o num de pessoas a processar: ");
          scanf("%d", &npess);
    }
    while(npess<=0);
    
    for(i=1;i<=npess;i++)
    {
        do
        {
            printf("Qual o sexo da %da pessoa? (Insira M/F): ", i);
            scanf("%c", &sexo);
        }
        while ((strcmp(sexo,"M")!=0)&&(strcmp(sexo,"F")!=0)); /*tem que ser && e não || */
        
        do
        {
            printf("Insira o peso em Kg da %da pessoa", i);
            scanf("%d", &peso);
        }
        while(peso<=0);
        
        do
        {
            printf("Insira a altura em cm da %da pessoa", i);
            scanf("%d", &alt);
        }
        while(alt<=0);
        
        imc=(float)peso/alt;
        npess=npess+1;
        
      while (strcmp(sexo,"M")==0)
            {       
                    if(imc<20.7)
                    {printf("Homem abaixo do peso!"); nabaixo=nabaixo+1;}
                    else if(imc<26.4)
                    {printf("Homem no peso normal!"); nnormal=nnormal+1;}
                     else if(imc<27.8)
                    {printf("Homem marginalmente acima do peso!"); nmarg=nmarg+1;}
                     else if(imc<31.1)
                    {printf("Homem acima do peso ideal!");nacima=nacima+1;}
                     else 
                    {printf("Homem obeso!");nobeso=nobeso+1;}
                    
            }
            
              
      while (strcmp(sexo,"F")==0)
            {       
                    if(imc<19.1)
                    {printf("Mulher abaixo do peso!"); nabaixo=nabaixo+1;}
                    else if(imc<25.8)
                    {printf("Mulher no peso normal!"); nnormal=nnormal+1;}
                     else if(imc<27.3)
                    {printf("Mulher marginalmente acima do peso!"); nmarg=nmarg+1;}
                     else if(imc<32.3)
                    {printf("Mulher acima do peso ideal!");nacima=nacima+1;}
                     else 
                    {printf("Mulher obesa!");nobeso=nobeso+1;}
                    
            }
                    
                    
   
       
          
            
        
    }
    
    
    
    
    
    
    
    
    system("pause");
    
}
