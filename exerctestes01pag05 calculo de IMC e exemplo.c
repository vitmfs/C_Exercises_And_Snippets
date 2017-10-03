#include <stdio.h>
int main()
{
    char nome[20];
    int peso;
    float altura;
    
    printf("Qual o nome?\n");
    scanf("%s", &nome);
    
    printf("Qual o peso em kg?\n");
    scanf("%d", &peso);
    
    printf("Qual a altura em metros?\n");
    scanf("%f", &altura);
    
    float IMC = (float) peso/pow(altura,2);
    printf("\nO %s tem um IMC de %4.2f.\n", nome, IMC);
    
    if (IMC<18.5)
    printf("\n Classificado de Abaixo do peso ideal\n");
    else if (IMC<24.9)
    printf("\n Classificado de Peso normal!\n");
    else if (IMC<29.9)
    printf("\n Classificado de Acima de seu peso!\n");
    else
    printf("\n Classificado de Obesidade!\n");
    
 system("pause");
}
