#include<stdio.h>
int main()
{
    int peso;
    int alt;
    int idade;
    int numex;
    
    printf("Insira o peso em Kg:   ");
    scanf("%d", &peso);
    
    printf("\nInsira altura em cm:   ");
    scanf("%d", &alt);
    
    printf("\nInsira a idade:        ");
    scanf("%d", &idade);
    
    printf("\nQuantas vezes exercita por semana: ");
    scanf("%d", &numex);
    
    float met=(float)655+9.6*peso+1.8*alt+4.7*idade;
    
    if (numex<1)
    met=met*1.2;
    if (numex<4)
    met=met*1.375;
    if (numex<6)
    met=met*1.55;
    else
    met=met*1.725;
    
    printf("\nNum. de Calorias Indicativo:  %4.2f \n\n", met);
    
    system("pause");
}
