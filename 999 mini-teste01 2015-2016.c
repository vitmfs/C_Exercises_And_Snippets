#include<stdio.h>

void linha();

int main()
{
	
	int eurosKmTipoA = 1;
	int eurosKmTipoB = 2;
	float eurosKmTipoC = 3.3;
	
	char nomeFunc[50];

	int quantasViagens;
	
	char cidade;

	int contaFunc = 0;
	
	char tipoVeiculo;
	
	int i;
	
	
	//1. O valor a pagar a cada funcionário
	float valorPagar = 0;
	
	//2. O número de Kms percorrido por cada funcionário
	int kmPercorridos = 0;
	
	//3. O nome e o número de Kms do funcionário que percorreu mais Kms
	char nomeFuncMaxKm[50];
	int maxkmPercorridos = 0;
	
	//4. O nome e o valor recebido pelo funcionário que recebeu o pagamento inferior
	char nomeFuncMinEuros[50];
	float valorPagarMin = 99999;
	
	//5. O total de Km percorridos
	int totalKmPercorridos = 0;
	
	//6. O total de pagamentos efetuados
	float totalPagamentos = 0;
	
	//7. O número de idas a cada um dos três Armazéns
	int numIdasBraga = 0;
	int numIdasCoimbra = 0;
	int numIdasLisboa = 0;
	
	int distBraga = 50;
	int distCoimbra = 120;
	int distLisboa = 320;
	
	
	
	
	do
	{
		printf("Introduza o nome do Funcionario (fim para terminar): ");
		gets(nomeFunc);
	}
	while(strcmp(nomeFunc, "")==0);
	
	while(strcmp(nomeFunc, "fim")!=0)
	{
		do
		{
			printf("\nQuantas viagens fez o Funcionario %s? ", nomeFunc);
			scanf("%d", &quantasViagens);
		}
		while(quantasViagens<0);
		
		fflush(stdin);
		
		for(i=1;i<=quantasViagens;i++)
		{
			//do
			//{
				printf("\nA qual dos armazens foi o Sr %s na %da viagem? (B)raga, (C)oimbra, (L)isboa? )", nomeFunc, i);
				scanf("%c", &cidade);
				//cidade = getchar();		
			//}
			//while(cidade!='B'||cidade!='b'||cidade!='C'||cidade!='c'||cidade!='L'||cidade!='l');
			
			//printf("\nInseriu %c", cidade);
			
			if(toupper(cidade)=='B')
			{
				kmPercorridos+= distBraga;
				totalKmPercorridos+= distBraga;
				numIdasBraga++;
				printf("\nO Sr %s percorreu %d Km ate agora!", nomeFunc, kmPercorridos);
			}
			
			if(toupper(cidade)=='C')
			{
				kmPercorridos+= distCoimbra;
				totalKmPercorridos+= distCoimbra;
				numIdasCoimbra++;
				printf("\nO Sr %s percorreu %d Km ate agora!", nomeFunc, kmPercorridos);
			}
			
			if(toupper(cidade)=='L')
			{
				kmPercorridos+= distLisboa;
				totalKmPercorridos+= distLisboa;
				numIdasLisboa++;
				printf("\nO Sr %s percorreu %d Km ate agora!", nomeFunc, kmPercorridos);
			}
			
			fflush(stdin);
		}
		
		//do
		//{
			printf("\nQual o tipo de veiculo? ");
			scanf("%c", &tipoVeiculo);
		//}
		//while(tipoVeiculo!='A'||tipoVeiculo!='a'||tipoVeiculo!='B'||tipoVeiculo!='b'||tipoVeiculo!='C'||tipoVeiculo!='c');
		
		if(toupper(tipoVeiculo)=='A')
		{
			valorPagar =  kmPercorridos * eurosKmTipoA;
			totalPagamentos+= valorPagar;
		}
		
		if(toupper(tipoVeiculo)=='B')
		{
			valorPagar =  kmPercorridos * eurosKmTipoB;
			totalPagamentos+= valorPagar;
		}
		
		if(toupper(tipoVeiculo)=='C')
		{
			valorPagar =  kmPercorridos * eurosKmTipoC;
			totalPagamentos+= valorPagar;
		}
		
		printf("\nO Sr. %s fez %d Km. Recebe %4.2f euros!",nomeFunc, kmPercorridos, valorPagar);
		
		
		if(kmPercorridos>maxkmPercorridos)
		{
			maxkmPercorridos = kmPercorridos;
			strcpy(nomeFuncMaxKm, nomeFunc);
		}
		
		kmPercorridos = 0;
		
		if(valorPagar<valorPagarMin)
		{
			valorPagarMin = valorPagar;
			strcpy(nomeFuncMinEuros, nomeFunc);
		}
		
		valorPagar = 0;
		
		
		//printf("\nTESTE %4.2f", valorPagarMin);
		
		contaFunc++;
		
		fflush(stdin);
		
		do
		{
			printf("\n\nIntroduza o nome do Funcionario (fim para terminar): ");
			gets(nomeFunc);
		}
		while(strcmp(nomeFunc, "")==0);
	}
	
	printf("\nO Sr %s foi o que percorreu mais km! Percorreu %d Kms!", nomeFuncMaxKm, maxkmPercorridos);
	printf("\nO Sr %s foi o que recebeu menos euros! Recebeu %4.2f euros!", nomeFuncMinEuros, valorPagarMin);
	linha();
	printf("\nConsideramos %d funcionarios", contaFunc);
	printf("\nTotal de Kms: %d kms", totalKmPercorridos);
	printf("\nTotal de pagamentos: %4.2f euros", totalPagamentos);
	linha();
	printf("\nIdas a Armazens:");
	printf("\nBraga: %d", numIdasBraga);
	printf("\nCoimbra: %d", numIdasCoimbra);
	printf("\nLisboa: %d", numIdasLisboa);
	linha();
	
	printf("\n\nOBRIGADO! TENHA UM BOM DIA!");
	
	
	
	return 0;
}

void linha()
{
	printf("\n************************************************************");
}
