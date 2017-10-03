#include<stdio.h>
int main()
{
    int nveic;
    
    char nome[20];
    int cc;
    int i;
    float ia;
    float somaIA;
    float minIA=99999999;
    float maxIA=0;
    
       do
       {
          printf("Quantos veiculos pretende processar? ");
          scanf("%d", &nveic);
       }
       while(nveic<=0);
       
    for(i=1;i<=nveic;i++)
    {
        do
        {
            printf("\nInsira o nome do proprietario: ");
            scanf("%s", &nome);
        } 
        while (strcmp(nome," ")==0);
            
        do
        {
            printf("\nInsira a cilindrada em cc: ");
            scanf("%d", &cc);     
        }
        while(cc<=0);
               
        if(cc<1251)
        ia=3.74*cc-2417.56;
        else
        ia=8.86*cc-8813.22;
        
        printf("Paga: %4.2f \n\n ", ia);
       
        somaIA=somaIA+ia;
        
        if(ia<minIA)
        minIA=ia;
        if(ia>maxIA)
        maxIA=ia;
    }
    
    float media=(float)somaIA/nveic;
    
    printf("Receita total: %4.2f \n\n ", somaIA);
    
    printf("IA minimo: %4.2f \n\n ", minIA);
    
    printf("IA maximo: %4.2f \n\n ", maxIA);
            
    

     system("pause");
}
