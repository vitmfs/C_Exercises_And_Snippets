#include<stdio.h>
int main()
{
    char nome[20];
    int hext, faltas, npess=0, n50=0, n25=0, n12=0, n7=0, n5=0;
    float bon, horas, medbon, minbon=999999999, total, maxbon=0;
    
    
    
    printf("Insira o nome do empregado (Fim para terminar): ");
    scanf("%s", &nome);
   
    
    while(strcmp(nome,"Fim")!=0)
    {
        do
        {
            printf("\nInsira o numero de horas de trabalho extra: ");
            scanf("%d", &hext);
        }
        while (hext<0);
        
        do
        {
            printf("\nInsira o numero de faltas: ");
            scanf("%d", &faltas);
        }
        while (faltas<0);
        
        npess++;
        
        horas=(float)hext-2/3*faltas;
        
        if(horas<=10)
        {bon=5; n5++;}
        else if(horas<=20)
        {bon=7.5 ;n7++;}
         else if(horas<=30)
        {bon=12; n12++;}
         else if(horas<=40)
        {bon=25; n25++;}
         else
        {bon=50; n50++;}
        
        if(minbon>bon)
        minbon=bon;
        if(maxbon<bon)
        maxbon=bon;
        
        total=total+bon;
        
        
        
        
        printf("\nO %s vai receber %4.2f de bonus!", nome, bon);
        
        printf("\n\n\nInsira o nome do empregado (Fim para terminar): ");
        scanf("%s", &nome);
 
        
    }
    
    medbon=(float)total/npess;
    
    
    printf("\n\nMedia de bonus vai ser: %4.2f ", medbon);
    printf("\n\nMax. de bonus vai ser: %4.2f ", maxbon);
    printf("\n\nMin. de bonus vai ser: %4.2f ", minbon);
    
    float perc5=(float)100*n5/npess;
    float perc7=(float)100*n7/npess;
    float perc12=(float)100*n12/npess;
    float perc25=(float)100*n25/npess;
    float perc50=(float)100*n50/npess;
    
    printf("\n\n %d das pessoas (%4.2f por cento) recebem 5 euros de bonus!", n5, perc5);
    printf("\n\n %d das pessoas (%4.2f por cento) recebem 7.5 euros de bonus!", n7, perc7);
    printf("\n\n %d das pessoas (%4.2f por cento) recebem 12 euros de bonus!", n12, perc12);
    printf("\n\n %d das pessoas (%4.2f por cento) recebem 25 euros de bonus!", n25, perc25);
    printf("\n\n %d das pessoas (%4.2f por cento) recebem 50 euros de bonus! \n\n", n50, perc50);
    
    system("pause");
    
}
