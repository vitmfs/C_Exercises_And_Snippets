#include<stdio.h>

int main (){

    

    int i;

    int x;

    int soma=0;

  

    

    printf("Por favor introduza os 5 numeros\n");

    for(i=0;i<5;i++)

    {printf("\nIntroduza o numero %d\n",(i+1));

    scanf("%d", &x);

    soma=soma+x;}

    

    float media=(float)soma/5;

    

    printf("A media dos numeros= %4.2f: \n", media);

    

    

    

    



system("pause");

} 
