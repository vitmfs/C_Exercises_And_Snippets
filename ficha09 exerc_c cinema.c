#include <stdio.h>
#include <string.h>

int main() {
    
 int numtotalfestas=0;
    char nome [20];
    int nrc;
    int nra;
    char semana [20];
    float valor;
   
    float max=0;
  
    char RespMax [20];
    char SemanaMax [20];
    int c=0, a=0;
    
printf("Nome do responsavel? (fim)");
scanf("%s", & nome);
while(strcmp(nome,"fim")!=0){
                                                
 do{       
  printf("Dia da semana?");
  scanf("%s", semana);}
  while(strcmp(semana,"segunda")!=0 && strcmp(semana,"terça")!=0 && strcmp(semana,"quarta")!=0 &&strcmp(semana,"quinta")!=0 &&strcmp(semana,"sexta")!=0 &&strcmp(semana,"sabado")!=0 &&strcmp(semana,"domingo")!=0);
  
  do
  {printf("Numero de Criancas=");
  scanf("%d", & nrc);
  }while (nrc<0);
  
  do {
  printf("numero de Adultos?");
  scanf("%d", & nra);}
  while (nra<1);
  c=c+nrc;
  if (nrc<10) 
  nrc=10;
  
  
  a=a+nra;
  valor=nrc*7.5+nra*5+35;
  printf(" \nA festa custa=%.2f\n" , valor);
  
  numtotalfestas=numtotalfestas+1;


   if (max<valor){
   max=valor;
   strcpy(RespMax,nome);
   strcpy(SemanaMax,semana);
}

   printf("Nome do responsavel? (fim)");
   scanf("%s", & nome);
}

printf("\nO responsavel que pagou mais foi o:%s" , RespMax );
printf("\nO dia da semana dessa festa foi:%s" , SemanaMax);
  
printf("\nNumero de festas total:%d" , numtotalfestas);
printf("\nNumero de crianças por semana foi: %d" , c);
printf("\nNumero de adultos por semana foi: %d" , a);
  
  
  
  
  
  system("\npause");
}
