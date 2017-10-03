#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main()
{
    char escuteiro[20];
      char MaxFEscuteiro[20];
          char MaxVEscuteiro[20];
          int adultos,criancas,total,contadorc,contadora,contadore,pessoas,pessoasmax=0;
    contadore=0;
    contadorc=0;
    contadora=0;
 
    float perce,percc,perca,MaxFTotal=0,ValorMax=0;
    
    printf("Qual e o nome do escuteiro? (Fim para sair) ");
    scanf("%s",&escuteiro);
    while (strcmp(escuteiro, "Fim")!=0){
       
       
        do{
                                                 printf("Qual e o numero de adultos? ");
                                                 scanf("%d",&adultos);}
                                                 while (adultos<0);
                                           
                                               do {  printf("Qual e o numero de criancas? ");
                                                 scanf("%d",&criancas);}
                                                 while (criancas<0);
                                               
                                                 
              contadore++; 
              contadora=contadora+adultos;     
              contadorc=contadorc+criancas;                                      
        total=50+100*adultos+75*criancas;
        printf("O total e de %d euros \n",total);
        
        
        pessoas=contadore+contadora+contadorc;
      
        if(pessoas>pessoasmax){
        pessoasmax=pessoas;
        strcpy(MaxFEscuteiro,escuteiro);
        MaxFTotal=total;}
        if (total>ValorMax)
        {
        ValorMax=total;
        strcpy(MaxVEscuteiro,escuteiro);
      }
        
            printf("Qual e o nome do escuteiro? (Fim para sair) ");
    scanf("%s",&escuteiro);}
        
        
        printf("O escuteiro que levou mais pessoas foi o %s pagando a associacao um total de %4.2f euros\n",MaxFEscuteiro,MaxFTotal);

          
          printf("O escuteiro que pagou mais pessoas foi o %s pagando a associacao um total de %4.2f euros\n",MaxVEscuteiro,ValorMax);

        perce=(float)contadore/pessoas;
        printf("O numero de escuteiros e= %d representado uma percentagem de %4.2f\n",contadore,perce);
        
        percc=(float)contadorc/pessoas;
        printf("O numero de criancas e= %d representado uma percentagem de %4.2f\n",contadorc,percc);
        
        perca=(float)contadora/pessoas;
        printf("O numero de adultos e= %d representado uma percentagem de %4.2f\n",contadora,perca);
        
        system("pause");
        }
