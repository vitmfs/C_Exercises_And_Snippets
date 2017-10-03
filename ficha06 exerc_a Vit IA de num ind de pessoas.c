#include<stdio.h>
#include<string.h>
int main()
{
    char nome[20];
    float IA,media;
    int cc;
  
    int veiculos=0;
    float total=0;
    float min=9999999;
    float max=0;
  
    printf("Insira o nome do comprador (Fim  para terminar): ");
    scanf("%s",&nome);
    
    while (strcmp(nome,"Fim")!=0)
    {
    
          do 
          {
             printf("\nInsira cilindrada do veiculo? ");
             scanf("%d",&cc);
          }
          while (cc<50);
    
  
          if (cc<1250)
          {IA=(float)3.74*cc-2417.56 ;}
          else 
          {IA=(float)8.86*cc-8813.22 ;}
                  
          if (min>IA)
          min=IA;
          if (max<IA)
          max=IA;
                    
          printf("\nO %s comprou um veiculo com %d cc de cilindrada", nome, cc);
          printf("\n\nPaga %4.2f euros de imposto automovel\n",IA);
  
          veiculos=veiculos+1;
          total=total+IA;
 
          printf("\n\nInsira o nome do comprador: ");
          scanf("%s",&nome);
    }

    media=total/veiculos;
  
    if (veiculos>0)
    {
    
        printf("\nReceita total de IA = %4.2f\n",total);
        printf("\n\nIA medio = %4.2f",media);
        printf("\n\nIA max = %4.2f",max);
        printf("\n\nIA min = %4.2f \n\n",min);
    }
    else 
    printf("\nNao foram inseridos veiculos.\n\n");
  
    system("pause");
    

}
