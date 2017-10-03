#include<stdio.h>
int main()
{
    int i;
    int A[4];
    int B[20];
    int C[24];
    
    printf("\nLeia uma lista de 5 números positivos e inteiros (Vetor A)\n");
    
    for(i=0; i<5 ;i++)
    do
    {
        printf("\nA[%d]? ", (i+1));
        scanf("\n%d" ,&A[i]);
    }
    while(A[i]<=0);
    
    printf("\nLeia uma lista de tamanho desconhecido de números positivos e inteiros (Vetor B). A leitura termina quando aparece um -1.\n");
    int qt=0;
    
    do
    {
        printf("B[%d]? (-1 para terminar)", (qt+1));
        scanf("\n%d" ,&B[qt]);
    }
    while (B[qt]<-1);
    
    while (B[qt]!=-1)
    {
          qt++;
          
          do
          {
              printf("B[%d]? (-1 para terminar)", (qt+1));
              scanf("\n%d" ,&B[qt]);
          }
          while (B[qt]<-1);
    }
    
    printf("\nEscreva a lista resultante da junção de A e B, sem repetidos\n");
    int y=1;
    C[0]=A[0];
    int j;
    int k;
    
    for(i=1;i<5;i++)
    {
        j=0;
        C[y]=A[i];
        
        while(A[i]!=C[j] && j<y)
        j++;
        if (j==y)
        y++;
    }
    
    for(i=0;i<qt;i++)
    {
        j=0;
        C[y]=B[i];
        while(B[i]!=C[j] && j<y)
        j++;
        if(j==y)
        y++;
    }
    
    printf("\nVetor C");
    for (i=0;i<y;i++)
    printf("\nC[%d]=%d", (i+1),C[i]);
    printf("\nEscreva os números pares do vetor A\n");
    printf("\nVetor A");
    for (i=0;i<5;i++)
    if (A[i]%2==0)
    printf("\nA[%d]=%d", (i+1),A[i]);
    printf("\nEscreva os números do vetor B pela ordem inversa à que foram inseridos.\n");
    printf("\nVetor B");
    for (i=qt-1;i>=0;i--)
    printf("\nB[%d]=%d", (i+1),B[i]);
    int soma=0;
    printf("\nEscreva a média dos valores do vetor C\n");
    for(i=0;i<y;i++)
    soma=soma+C[i];
    float media=(float)soma/y;
    printf("\nMedia dos elementos de C=%4.2f",media);
    int proc;
    printf("\nEscreva se existe um determinado número no vetor C e caso exista em que posição.\n");
    do
    {
        printf("\nElemento a procurar em C? ");
        scanf("\n%d" ,&proc);
    }
    while(proc<=0);
    j=0;
    while(proc!=C[j] && j<y)
    j++;
    if(j==y)
    printf("\nElemento a procurar em C (%d) não existe!",proc);
    else
    printf("\nElemento a procurar em C (%d) existe na posicao %d !",proc,(j+1));
    
    system("pause");
}
