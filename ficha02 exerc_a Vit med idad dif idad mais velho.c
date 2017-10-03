#include<stdio.h>
int main()
{ 
    char nome1[10], nome2[10];
    int idade1, idade2;
    
    printf("\nNome do primeiro irmao? ");
    scanf("%s",&nome1);
    printf("\nIdade do primeiro irmao? ");
    scanf("%d",&idade1);
    
    printf("\nNome do segundo irmao? ");
    scanf("%s",&nome2);
    printf("\nIdade do segundo irmao? ");
    scanf("%d",&idade2);
    
    float media=(float)(idade1+idade2)/2;
    
    int dif_idades=abs(idade1-idade2);
    
    printf("\n\nMedia de idades = %4.2f", media);
    
    printf("\n\nDif. de idade: %d anos", dif_idades);
    
    if (idade1>idade2)
    printf("\n\nIrmao mais velho: %s \n\n", nome1);
    else if (idade1<idade2)
    printf("\n\nIrmao mais velho: %s \n\n", nome2);
    else
    printf("\nIrmaos sao gemeos");
    
    
    system("pause");    
}
    
        
