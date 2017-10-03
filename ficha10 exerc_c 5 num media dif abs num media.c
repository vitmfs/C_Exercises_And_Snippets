#include <stdio.h>

int main(){

    int num[5];

    float media=0;

    float dif=0;

    int soma=0;

    int i;



    for(i=0;i<5;i++){

        printf("Insira o %d numero.\n",(i+1));

        scanf("%d",&num[i]);



        soma=soma+num[i];

    }



    media=(float)soma/5;



    for(i=0;i<5;i++){

       dif=(float)num[i]-media;



    printf("A diferenca entre o %d e a media e %4.2f\n",num[i],dif);}



    system("pause");

}

