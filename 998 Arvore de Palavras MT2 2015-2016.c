#include<stdio.h>
#include<string.h>

void inserirEspacos( int numDeEspacos);
void inserirAsteriscos( int numDeAsteriscos);

int main()
{
	char fraseInserida[100];
	char *sinais = " ";
	char *palavra;
	
	int strLenMin = 999;
	int strLenMax = 0;
	
	
	
	int contaPalavras = 1;
	
	int i = 0;
	
	printf("\nInsira uma sequencia de palavras separadas por um espaco!\n");
	gets(fraseInserida);			//printf(fraseInserida);
	
	for(i=1;i<strlen(fraseInserida)-1;i++)
	{
		if(fraseInserida[i]==' ')
		{
			contaPalavras++;
		}
	}										//printf("\nTem %d palavras!\n", contaPalavras);
	
	
	char vetorPalavras[20][contaPalavras];
	
	for(i=0;i<contaPalavras;i++)
	{
		strcpy(vetorPalavras[i], "");
		//printf(vetorPalavras[i]);
	}
	
	
	palavra = strtok(fraseInserida, sinais);
	i = 0;
	
	
	while(palavra!=NULL)
	{
		
		printf(palavra);
		printf("\n");			//printf("\n%d", strlen(palavra));  printf("\n%d", sizeof(palavra));
		
		if(strlen(palavra)>strLenMax)
		{
			strLenMax = strlen(palavra);
		}
		
		if(strlen(palavra)<strLenMin)
		{
			strLenMin = strlen(palavra);
		}
		
		//strcpy(vetorPalavras[i], palavra);		printf(vetorPalavras[i]);		//printf(vetorPalavras[i]);
		
		palavra = strtok(NULL, sinais);
		i++;
		
	}
	
	printf("\n%d", strLenMin);
	printf("\n%d\n", strLenMax);
	
	
	
	
	for(i=0;i<strLenMax;i++)
	{
		printf("%d", i);
		inserirEspacos(strLenMax-i); inserirAsteriscos(strLenMin/2+i); inserirAsteriscos(strLenMin/2+i); printf("\n");
	}
	
	inserirEspacos((strLenMax-strLenMin)*2); inserirAsteriscos(ceil(strLenMax/4)); printf("\n");
	inserirEspacos((strLenMax-strLenMin)*2); inserirAsteriscos(ceil(strLenMax/4)); printf("\n");
	
	
	
	
	
	
	
	return 0;
}



















void inserirEspacos( int numDeEspacos)
{
	int i;
	
	for(i=0;i<numDeEspacos;i++)
	{
		printf(" ");
	}
}

void inserirAsteriscos( int numDeAsteriscos)
{
	int i;
	
	for(i=0;i<numDeAsteriscos;i++)
	{
		putchar('*');
	}
}
