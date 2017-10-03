#include<stdio.h>
int main()
{
	char tipo[5];
	int nlivros=0, ncds=0, ndvds=0, nartigos=0;
	float valor, somavl=0, somavcd=0, somavdvd=0; 
	
	do
	{
		printf("Insira o tipo de artigo p.f. (livro, cd, ou dvd; fim para terminar): ");
		scanf("%s", &tipo);
	}
	while(strcmp(tipo,"livro")!=0&&strcmp(tipo,"LIVRO")!=0&&strcmp(tipo,"cd")!=0&&strcmp(tipo,"CD")!=0&&strcmp(tipo,"dvd")!=0&&strcmp(tipo,"DVD")!=0&&strcmp(tipo,"fim")!=0&&strcmp(tipo,"Fim")!=0&&strcmp(tipo,"FIM")!=0);
	
	while((strcmp(tipo,"fim")!=0)&&(strcmp(tipo,"Fim")!=0)&&(strcmp(tipo,"FIM")!=0))	
	{
		do
		{
			printf("\n\nInsira o preco do %s: ", tipo);
			scanf("%f", &valor);
		}	
		while(valor<=0);
		
		if(strcmp(tipo,"livro")==0||strcmp(tipo,"LIVRO")==0)
		{somavl=somavl+valor; nlivros++; nartigos++;}
		
		else if(strcmp(tipo,"cd")==0||strcmp(tipo,"CD")==0)
		{somavcd=somavcd+valor; ncds++; nartigos++;}
		
		else
		{somavdvd=somavdvd+valor; ndvds++; nartigos++;}
		
		do
		{
			printf("\n\nInsira o tipo de artigo p.f. (livro, cd, ou dvd; fim para terminar): ");
			scanf("%s", &tipo);
		}
		while(strcmp(tipo,"livro")!=0&&strcmp(tipo,"LIVRO")!=0&&strcmp(tipo,"cd")!=0&&strcmp(tipo,"CD")!=0&&strcmp(tipo,"dvd")!=0&&strcmp(tipo,"DVD")!=0&&strcmp(tipo,"fim")!=0&&strcmp(tipo,"Fim")!=0&&strcmp(tipo,"FIM")!=0);
		
	}
	
	float medialivros=(float)somavl/nlivros;
	float mediacds=(float)somavcd/ncds;
	float mediadvds=(float)somavdvd/ndvds;

	if(nartigos>0) /* Os floats podem rebentar se denominadores tiverem valor 0 */
	{
		float somaart=(float)somavl+somavcd+somavdvd;
	
		if (nlivros>0)
		{
			float medialivros=(float)somavl/nlivros;
			printf("\n\nNumero de livros vendidos: %d ", nlivros);
			printf("\nMedia do valor dos livros vendidos: %4.2f", medialivros);
		}
		
		if (ncds>0)	
		{
			float mediacds=(float)somavcd/ncds;
			printf("\n\nNumero de cds vendidos: %d ", ncds);
			printf("\n\nMedia do valor dos cds vendidos: %4.2f", mediacds);
		}
		
		if (ndvds>0)	
		{
			printf("\n\nNumero de dvds vendidos: %d ", ndvds);	
			printf("\n\nMedia do valor dos dvds vendidos: %4.2f", mediadvds);
		}
		
		
		printf("\n\nMedia por artigo: %4.2f \n\n", somaart/nartigos);
		
	
	}
	else
		printf("\n\nNao foram inseridos artigos! \n\n");
	
	

	
	system("pause");
	
}
