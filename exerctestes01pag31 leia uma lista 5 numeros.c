#include<stdio.h>
int main()
{
    int i;
    int A[4];
    int B[9];
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
    
    while (B[qt]!=-1 && qt<10)
    {
          qt++;
          do
          {
              printf("B[%d]? (-1 para terminar)", (qt+1));
              scanf("\n%d" ,&B[qt]);
          }
          while (B[qt]<-1);
    }
    
    printf("\nEscreva a lista resultante da junção de A e B\n");
    int y=0;
    C[0]=A[0];
    int k;
    for(i=1;i<5;i++)
    {
        y++;
        C[y]=A[i];
    }
    printf("\nVetor C só com A");
    for(i=0;i<=y;i++)
    printf("\nC[%d]=%d", (i+1),C[i]);
    y=4;
    for(i=0;i<qt;i++)
    {
        y++;
        C[y]=B[i];
    }
    printf("\nVetor C");
    for(i=0;i<=y;i++)
    printf("\nC[%d]=%d", (i+1),C[i]);
    int proc;
    printf("\nEscreva se existe um determinado número no vetor C e caso exista em que posição.\n");
    do
    {
        printf("\nElemento a procurar em C? ");
        scanf("\n%d" ,&proc);
    }
    while(proc<=0);
    int j=0;
    while(proc!=C[j] && j<y)
    j++;
    if(j==y)
    printf("\nElemento a procurar em C (%d) não existe! ",proc);
    else
    printf("\nElemento a procurar em C (%d) existe na posicao %d !",proc,(j+1));
    printf("\nEscreva os números impares do vetor C\n");
    printf("\nVetor C");
    for(i=0;i<y;i++)
    if(C[i]%2!=0)
    printf("\nC[%d]=%d", (i+1),C[i]);
    printf("\nEscreva os números do vetor C pela ordem inversa à que foram inseridos.\n");
    printf("\nVetor C");
    for (i=y;i>=0;i--)
    printf("\nC[%d]=%d", (i+1),C[i]);
    int D[20];
    D[0]=C[0];
    int dy=1;
    for(i=1;i<=y;i++)
    {
        j=0;
        D[dy]=C[i];
        while(C[i]!=D[j] && j<dy)
        j++;
        if(j==dy)
        dy++;
    }
    printf("\nVetor D");
    for(i=0;i<dy;i++)
    printf("\nD[%d]=%d", (i+1),D[i]);
    
    system("pause");
}
