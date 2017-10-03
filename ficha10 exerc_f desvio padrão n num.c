//Francisco Marques - 36299



#include <stdio.h> 

#include <stdlib.h>

#include <string.h>

#include <math.h>

int main(){ 

int i=0, n;

float num[30], sumatorio=0, mediasum=0, media, desvio;

do{

printf("N (n numeros a ler) : ");

scanf("%i",&n);

}while(n<=0);



for(i=0;i<n;i++){

printf("Insira num: ");

scanf("%f",&num[i]);

mediasum=num[i]+mediasum;

}

//clacular media

media=mediasum/n;

//calcular o sumatorio

for(i=1;i<n;i++){

sumatorio=(float)sumatorio+pow((num[1]-media),2);

}



//calcular o resultado final

desvio=sqrt(sumatorio/n);

printf("\nDesvio = %.2f\n\n", desvio);



    system ("pause");

}
