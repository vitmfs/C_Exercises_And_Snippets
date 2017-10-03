#include <stdio.h>

void imprimeMatriz(int numDeLinhas, int numDeColunas, int matrizRecebida[numDeLinhas][numDeColunas]);

void imprimeArray(int tamanhoArrayRecebido, int arrayRecebido[tamanhoArrayRecebido]);

void determinaTamanhoEsparsa(int numDeLinhas, int numDeColunas, int matrizRecebida[numDeLinhas][numDeColunas]);

void iniciaMatriz(int numDeLinhas, int numDeColunas, int numLinhasComp, int numColunasComp, int matrizComp[numLinhasComp][numColunasComp]);

void criaMatrizEsparsa(int numDeLinhas, int numDeColunas, int numLinhasComp, int numColunasComp, int matrizComp[numLinhasComp][numColunasComp], int MAXNULOS);

void criaMatrizCompacta(int numLinhas, int numColunas, int matrizEsparsa[numLinhas][numColunas]);




int main()
{
	
	int matrizEsparsa[4][5] = {{0, 7, 0, 0, 0}, {0, 0, 0, 2, 0}, {0, 0, 0, 0, 1}, {0, 0, 3, 0, 0}};
	printf("Declarei esta matriz esparsa para testar, a mesma do enunciado!\n");
	imprimeMatriz(sizeof(matrizEsparsa[0][0]), sizeof(matrizEsparsa[0])/sizeof(matrizEsparsa[0][0]), matrizEsparsa);
	
	printf("\n");
	
	
	int matrizCompacta[3][3] = {{0, 1, 7}, {1, 3, 2}, {3, 2, 3}};
	printf("Declarei esta matriz compacta para testar, a mesma do enunciado!\n");
	imprimeMatriz(sizeof(matrizCompacta[0])/sizeof(matrizCompacta[0][0]), sizeof(matrizCompacta[0])/sizeof(matrizCompacta[0][0]), matrizCompacta);
	
	printf("\n");
	//determinaTamanhoEsparsa(sizeof(matrizCompacta[0])/sizeof(matrizCompacta[0][0]), sizeof(matrizCompacta[0])/sizeof(matrizCompacta[0][0]), matrizCompacta);
	
	printf("A partir da matriz compacta chamo a funcao para ciar a matriz esparsa original!");
	//iniciaMatriz(sizeof(matrizEsparsa[0][0]), sizeof(matrizEsparsa[0])/sizeof(matrizEsparsa[0][0]), sizeof(matrizCompacta[0])/sizeof(matrizCompacta[0][0]), sizeof(matrizCompacta[0])/sizeof(matrizCompacta[0][0]), matrizCompacta);
	
	printf("\n");
	
	criaMatrizEsparsa(sizeof(matrizEsparsa[0][0]), sizeof(matrizEsparsa[0])/sizeof(matrizEsparsa[0][0]), sizeof(matrizCompacta[0])/sizeof(matrizCompacta[0][0]), sizeof(matrizCompacta[0])/sizeof(matrizCompacta[0][0]), matrizCompacta, 4);
	
	printf("\n");
	printf("A partir da matriz Esparsa chamo a funcao para ciar a matriz compacta!");
	criaMatrizCompacta(sizeof(matrizEsparsa[0][0]), sizeof(matrizEsparsa[0])/sizeof(matrizEsparsa[0][0]), matrizEsparsa);
	
	
	getchar();
	return 0;
}

void criaMatrizCompacta(int numLinhas, int numColunas, int matrizEsparsa[numLinhas][numColunas])
{
	int i;
	int j;
	int contadorDeNaoNulos = 0;
	
	for (i = 0; i < numLinhas; i++)
	{
		
		for (j = 0; j < numColunas; j++)
		{
			
			if (matrizEsparsa[i][j] != 0)
			{
				contadorDeNaoNulos++;
			}
			
			
		}
	}
	
	//printf("Nao nulos: %d", contadorDeNaoNulos);
	
	int matrizComp[contadorDeNaoNulos][3];
	//printf("\n");
	//printf("%d", sizeof(matrizComp[0][0]));
	
	for (i = 0; i < numLinhas ; i++)
	{
		
		for (j = 0; j < numColunas; j++)
		{
			
			if (matrizEsparsa[i][j] != 0)
			{
				matrizComp[i][0] = i;
				matrizComp[i][1] = j;
				matrizComp[i][2] = matrizEsparsa[i][j];
			}
			
			
		}
	}
	//printf("\n");
	printf("\n");
	fflush(stdin);
	imprimeMatriz(contadorDeNaoNulos , 3, matrizComp);
	
	
	
}

void criaMatrizEsparsa(int numDeLinhas, int numDeColunas, int numLinhasComp, int numColunasComp, int matrizComp[numLinhasComp][numColunasComp], int MAXNULOS)
{
	int novaMatriz[numDeLinhas][numDeColunas];
	
	int i;
	int j;
	
	int contaZeros = 0;
	int contaElementosNaoNulos = 0;
	
	for (i = 0; i < numDeLinhas; i++)
	{
		for (j = 0; j < numDeColunas; j++)
		{
			
			novaMatriz[i][j] = 0;
			
		}
		
		
		
	}
	
	for (i = 0; i < numLinhasComp; i++)
	{
		novaMatriz[matrizComp[i][0]][matrizComp[i][1]] = matrizComp[i][2];
		
	}
	
	
	for (i = 0; i < numDeLinhas; i++)
	{
		for (j = 0; j < numDeColunas; j++)
		{
			
			if (novaMatriz[i][j] == 0)
			{
				contaZeros++;
			}
			else
			{
				contaElementosNaoNulos++;
			}
			
		}
		
		if (contaZeros > MAXNULOS)
		{
			printf("Numero ilegal de zeros por linha!");
		}
		contaZeros = 0;
		
		
		
	}
	
	printf("\n");
	printf("Numero de elementos nao nulos: %d", contaElementosNaoNulos);
	printf("\n");
	imprimeMatriz(numDeLinhas, numDeColunas, novaMatriz);
	
	
	
	
}

void iniciaMatriz(int numDeLinhas, int numDeColunas, int numLinhasComp, int numColunasComp, int matrizComp[numLinhasComp][numColunasComp])
{
	int novaMatriz[numDeLinhas][numDeColunas];
	
	int i;
	int j;
	
	for (i = 0; i < numDeLinhas; i++)
	{
		for (j = 0; j < numDeColunas; j++)
		{
			
			novaMatriz[i][j] = 0;
			
		}
		
	}
	
	for (i = 0; i < numLinhasComp; i++)
	{
		novaMatriz[matrizComp[i][0]][matrizComp[i][1]] = matrizComp[i][2];
	}
	
	printf("\n");
	
	imprimeMatriz(numDeLinhas, numDeColunas, novaMatriz);
	
}

void determinaTamanhoEsparsa(int numDeLinhas, int numDeColunas, int matrizRecebida[numDeLinhas][numDeColunas])
{
	int i;
	int j;
	
	int maiorLinha = 0;
	int maiorColuna = 0;
	
	for (i = 0; i < numDeLinhas; i++) 
	{
		if (matrizRecebida[i][0] > maiorLinha)
		{
			maiorLinha = matrizRecebida[i][0];
		}
		
		if (matrizRecebida[i][1] > maiorColuna)
		{
			maiorColuna = matrizRecebida[i][1];
		}
		
		
	}
	
	printf("\n");
	printf("%d", maiorLinha);
	
	printf("\n");
	printf("%d", maiorColuna);
	
}


void imprimeArray(int tamanhoArrayRecebido, int arrayRecebido[tamanhoArrayRecebido])
{
	int i;
	
	for (i = 0; i < tamanhoArrayRecebido; i++)
	{
		printf("%d", arrayRecebido[i]);
		
	}
	
	printf("\n");
	
	
}

void imprimeMatriz(int numDeLinhas, int numDeColunas, int matrizRecebida[numDeLinhas][numDeColunas])
{
	

	int i;
	int j;
	
	for (i = 0; i < numDeLinhas; i++)
	{
		for (j = 0; j < numDeColunas; j++)
		{
			printf("%d", matrizRecebida[i][j]);
		}
		
		printf("\n");
	}
	
}


void transformaEmMatrizEsparsa(int MAX, int matriz[MAX][MAX], int MAXNULOS) 
{
	
	
}

/*
	int tamanhoDoArray = 5;
	int arrayDeInts[tamanhoDoArray];
	arrayDeInts[0] = 1;
	arrayDeInts[1] = 2;
	arrayDeInts[2] = 3;
	arrayDeInts[3] = 4;
	arrayDeInts[4] = 5;
	
		
	imprimeArray(tamanhoDoArray, arrayDeInts);
	
	
	char palavra[] = "String";
	printf("%d", sizeof(palavra));
	printf("%c", palavra[1]);
*/

/*
	printf("\n");
	
	printf("%d %d %d ", sizeof(matrizEsparsa[0]), sizeof(matrizEsparsa[0][0]), sizeof(matrizEsparsa[0])/sizeof(matrizEsparsa[0][0]));
	
	printf("\n");
*/

/*
	int row, column;
	
	int maxRow = 0;
	int maxColumn = 0;
	
	for (row = 0; row < 3; row ++) 
	{
		if (matrizCompacta[row][0] > maxRow)
		{
			maxRow = matrizCompacta[row][0];
		}
		
		if (matrizCompacta[row][1] > maxRow)
		{
			maxColumn = matrizCompacta[row][1];
		}
		
		
	}
	
	printf("\n");
	
	printf("%d %d %d ", sizeof(matrizCompacta[0]), sizeof(matrizCompacta[0])/sizeof(matrizCompacta[0][0]), sizeof(matrizCompacta[0])/sizeof(matrizCompacta[0][0]));
	
	printf("\n");
*/


	
	


