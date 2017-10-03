#include<stdio.h>
int main()
{
    int idade1;
    int idade2;

    do
    {
        printf("Insira a idade do primeiro irmao: ");
        scanf("%d", &idade1);
    }
    while(idade1<0);
    
    
    do
    {
        printf("\nInsira a idade do segundo irmao: ");
        scanf("%d", &idade2);
    }
    while(idade2<0);
    
    float media=(float)(idade1+idade2)/2;
    
    printf("\n\n\nMedia de idades: %4.2f anos \n\n\n", media);
    
    
    system("pause");
}
