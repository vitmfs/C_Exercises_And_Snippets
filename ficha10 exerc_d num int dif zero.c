#include<stdio.h>
int main()
{


int num, x,i=1;
int v[10];
int y,u;

printf("\nInserir numero\n");
scanf("%d", &v[i]);

do {
i++;
printf("\nInserir numero\n");
scanf("%d", &v[i]);
}
while (v[i]-v[i-1]!=0);

printf("\nQual o numero a procurar no vetor\n");
scanf("%d", &x);

int k=1;

while ((x!=v[k]) && (k<i))
k++;

if (x!=v[k])
printf(" \no numero nao existe no vetor\n");
else
printf(" \no numero %d esta na posicao:%d", x,k);


system("\npause");

}
