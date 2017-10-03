#include<stdio.h>
int main()
{
    
    int nota1;
    int nota2;
    int nota3;
    
    printf("Inserir a primeira nota:  ");
    scanf("%d", &nota1);
    
    printf("Inserir a segunda nota:   ");
    scanf("%d", &nota2);
    
    printf("Inserir a terceira nota:  ");
    scanf("%d", &nota3);
    
    float media=(float)(nota1+nota2+nota3)/3;
    
    if (media<9.5)
    printf("\nREPROVADO com %4.2f valores\n\n", media);
    else
    printf("\nAPROVADO com %4.2f valores\n\n", media);
    
    system("pause");
    
}
    
    
    
    
    
