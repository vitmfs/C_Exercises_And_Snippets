#include<stdio.h>
int main()
{
    int n1;
    int n2;
    int n3;
    
    printf("Insira o primeiro numero: ");
    scanf("%d", &n1);
    printf("\nInsira o segundo numero:  ");
    scanf("%d", &n2);
    printf("\nInsira o terceiro numero: ");
    scanf("%d", &n3);
    
    if (pow(n1,2)+pow(n2,2)>2*n3)
    printf("\nProduto dos 3 numeros: %d \n\n", n1*n2*n3);
    else
    printf("\nSoma dos 3 numeros: %d \n\n", n1+n2+n3);
    
    system("pause");
}
    
    
