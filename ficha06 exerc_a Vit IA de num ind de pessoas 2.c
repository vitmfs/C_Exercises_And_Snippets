#include<stdio.h>
int main()
{
    char nome[20];
    int cc;
    float IA, media, minIA=999999999, maxIA=0;
    float IAtotal;
    int nveic;
    
    printf("Insira o nome do comprador p.f. (Fim para terminar): ");
    scanf("%s", &nome);
    
    while(strcmp(nome,"Fim")!=0)
    {
        do
        {
            printf("\n\nInsira a cilindrada do veiculo adquirido: ");
            scanf("%d", &cc);
        }
        while(cc<50);
        
        if (cc<1251)
        {IA=(float)3.74*cc-2417.56;}
        else
        {IA=(float)8.86*cc-8813.22;}
        
        if(minIA>IA)
        minIA=IA;
        if(maxIA<IA)
        maxIA=IA;
        
        nveic=nveic+1;
        
        IAtotal=IAtotal+IA;
        
        printf("Insira o nome do comprador p.f. (Fim para terminar): ");
        scanf("%s", &nome);
    }
        
        media=(float)IAtotal/nveic;
        
        if(nveic>0)
        {
                   printf("Receita total: %4.2f ", IAtotal);
                   printf("IA medio: %4.2f ",media);
                   printf("IA maximo: %4.2f ", maxIA);
                   printf("IA minimo: %4.2f ", minIA);
        }
        
        else 
        printf("\nNao foram inseridos veiculos.\n\n");
        /**/
    
    
    
    
    
    system("pause");
    
}
