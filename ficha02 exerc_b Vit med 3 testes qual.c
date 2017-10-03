#include<stdio.h>
int main()
{
    int t1, t2, t3;
    
    printf("Nota 1o Teste: ");
    scanf("%d", &t1);
    printf("\nNota 2o Teste: ");
    scanf("%d", &t2);
    printf("\nNota 3o Teste: ");
    scanf("%d", &t3);
    
    float media=(float)(t1+t2+t3)/3;
    
    printf("\nMedia dos Testes: %4.2f ", media);
    
    if(media<5)
    printf("\n\nClass. final: Mau\n\n");
    else if(media<9.5)
    printf("\n\nClass. final: Mediocre\n\n");
    else if(media<14)
    printf("\n\nClass. final: Suficiente\n\n");
    else if(media<16)
    printf("\n\nClass. final: Bom\n\n");
    else
    printf("\n\nClass. final: Muito Bom\n\n");
    
    
    system("pause");
}
    
