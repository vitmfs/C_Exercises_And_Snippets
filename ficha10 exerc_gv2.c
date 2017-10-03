//Francisco Marques - 36299



#include <stdio.h> 

#include <stdlib.h>

#include <string.h>

#include <math.h>

int main(){ 

int n, i, j, num, oc[999];

for(j=0;j<=20;j++) oc[j]=0; //inicializar a variavel oc



do{

printf("Insira num [0-20] (negativo para terminar): ");

scanf("%i",&num);

}while(num>=20);

while(num>=0){

oc[num]++; // incrementar o vetor na posicao em que o num foi definido (ex num=5, logo oc[5] = oc[5]+1)

do{

printf("Insira num [0-20] (negativo para terminar): ");

scanf("%i",&num);

}while(num>=20);

}

for(j=1;j<=20;j++){ // j conador de 0 - 20 (numeros possiveis)

if (oc[j]!=0) // se o vetor for dif 0 nessa posicao sera impress o numero de occorencias para esse num 

printf("O Numero %i foi encontrado %i vezes!\n", j, oc[j]);

}

    system ("pause");

}
