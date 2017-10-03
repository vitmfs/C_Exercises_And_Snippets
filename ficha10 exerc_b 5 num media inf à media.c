#include <stdio.h>

int main()

{

    //M10[Inicializar acumulador de numeros]

    int Soma=0;

   //M20[Estabelecer ciclo para processar os 5 numeros]

    int I;

    int numero[5];

    for(I=0;I<5;I++){

             //M30[Ler e validar o numero]

            printf("Qual o numero %d?",I+1);

             scanf("%d",&numero[I]);

             //M40[Atualizar acumulador de numeros]

             Soma=Soma+numero[I]; 

    } 

    //M50[Calcular a media dos numeros]

    float media = (float)Soma/I;

    //M60[Estabelcer ciclo para processar numeros inferiores a media]

    for(I=0;I<5;I++)

    //M70[Escrever numeros inferiores a media]

    if (numero[I]<media)

    printf("Valor abaixo da media: %d.\n",numero[I]);

    //M80[Terminar]

    system("pause");

}
