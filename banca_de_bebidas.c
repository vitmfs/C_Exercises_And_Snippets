/*
	
	Enunciado
	Uma banca de rua vende seis tipos de bebidas na entrada de um estádio de
	futebol. As bebidas são taxadas de forma diferente: Águas 13%, Cerveja 23%,
	Iogurtes 6%, Leite 6%, Refrigerantes 23% e Vinho 13%. Quando o cliente faz o
	pedido diz quantas bebidas pretende comprar, e para cada um dos itens: qual
	o tipo de bebida, a quantidade e o preço unitário. Para cada item pretende-se
	saber o valor sem iva, tipo de iva e o correspondente valor de iva. No fim do
	pedido de cada cliente pretende-se saber o valor a pagar e qual a parte de iva.
	No fim do dia pretende-se saber quantos pedidos foram feitos para cada tipo
	de iva, assim como a pessoa que pagou mais iva. Pretende-se Programa em
	C.
	
*/

# include <stdio.h>
# include <string.h>

int main()
{
	// DECLARACAO E INICIALIZACAO DE VARIAVEIS
	
	// 1) ANALISE DO TEXTO
	
	// IMPOSTOS
	int impostoAguas 			= 13;
	int impostoCerveja 			= 23;
	int impostoIogurtes 		= 6;
	int impostoLeite 			= 6;
	int impostoRefrigerantes 	= 23;
	int impostoVinho 			= 13;
	
	// QUANTAS BEBIDAS O CLIENTE PRETENDE
	int quantasBebidas = 0;
	
	// PARA CADA UM DOS ITEMS
	char 	tipoDeBebida 	= ' ';
	int 	quantidade 		= 0;
	float 	precoUnitario 	= 0.0;
	
	// PARA CADA ITEM
	float 	valorSemIva		= 0;
	int 	tipoDeIVA 		= 0;
	float 	valorDeIVA 		= 0.0;
	
	// NO FIM DO PEDIDO DE CADA CLIENTE
	float valorAPagar 	= 0.0;
	float parteDoIVA 	= 0.0;
	
	// NO FIM DO DIA
	int numeroDeIVAs6 	= 0;
	int numeroDeIVAs13 	= 0;
	int numeroDeIVAs23 	= 0;
	
	char nomePagouMaisIVA[20];
	float valorMaxDeIVA = 0.0;
	float valorPagoPeloClienteMaxIVA = 0.0;
	
	
	// 2) ANALISE DAS IMAGENS
	char nome[20];
	
	char inicioProgString[] 		= "******** Inicio Programa ******\n";
	char nomeDoCompradorString[] 	= "\nNome do comprador? (Fim para terminar): ";
	char inicioDeClienteString[] 	= "\n******* Inicio %s **********\n";
	char quantasBebidasDifsString[] = "\nQuantas bebidas diferentes quer?  ";
	char tipoDeBebidaString[] 		= "\nBebida? (A)guas, (C)erveja, (I)ogurtes, (L)eite, (R)efrigerantes, (V)inho?: ";
	char precoUnitarioString[] 		= "\nPreco Unitario? ";
	char quantidadeString[] 		= "\nQuantidade? ";
	char itemPrecoString[] 			= "\nItem %4.2f (+iva%d de %3.2f)";
	char pagaString[] 				= "\nPaga %3.2f (sendo o IVA de %3.2f)";
	char fimDeClienteString[] 		= "\n******* Fim %s **********\n";
	char resumoProgString[] 		= "\n********** Resumo **********\n";
	char pessouPagouMaisString[] 	= "\nPessoa que pagou mais IVA %s (%3.2f euros)";
	char pagaramString[] 			= "\nPagaram %3.2f (IVA de %3.2f)";
	char produtosIVAString[] 		= "\nProdutos IVA 6:%d ; 13:%d ; 23:%d";
	char fimProgString[] 			= "\n********** Fim Programa**********\n";

	float valorTotalNoFinalDoDia 			= 0;
	float parteIVAnoValorTotalNoFinalDoDia 	= 0;
	

	// INICIO DA LOGICA DO PROGRAMA
	// IMPRIMIR STRING DO INICIO
	printf( "%s", inicioProgString );
	
	// PEDIR O NOME E VALIDAR O NOME E SE FOR FIM ENTAO 
	// NINGUEM VAI SER PROCESSADO E O PROGRAMA ACABA 
	// EXEMPLO MAIS SIMPLE QUE APARECE
	do
	{
		printf( "Nome do comprador? (Fim para terminar):\n" );
		scanf( " %s", nome );
		fflush( stdin );
		
		if ( strcmp( nome, "Fim") == 0 ||  strcmp( nome, "fim") == 0 )
		{
			printf( "%s", resumoProgString );
			printf( "%s", "Ninguem foi processado!\n");
			printf( "%s", fimProgString );
			return 0;
		}
	}
	while ( strcmp( nome, "") == 0 );
	
	// ENQUANTO O NOME NAO FOR FIM ENTAO REPETIMOS O CICLO
	while ( strcmp( nome, "Fim") != 0  &&  strcmp( nome, "fim") != 0 )
	{
		// APRESENTAR A STRING DE INICIO PARA CADA CLIENTE
		printf( inicioDeClienteString, nome );
		
		// LER E VALIDAR QUANTAS BEBIDAS DIFERENTES
		do
		{
			printf( "Quantas bebidas diferentes quer?" );
			scanf( " %d", &quantasBebidas );
			fflush( stdin );
		}
		while ( quantasBebidas <= 0 );

		// PROCESSAMOS AS TODAS AS BEBIDAS AQUI
		int i = 0;
		for( i = 0; i < quantasBebidas; i++ )
		{
			// LER E VALIDAR O TIPO DE BEBIDA
			do
			{
				printf( tipoDeBebidaString );
				tipoDeBebida = getchar();
				fflush( stdin );
			}
			while ( tipoDeBebida != 'A' &&
					tipoDeBebida != 'C' &&
					tipoDeBebida != 'I' &&
					tipoDeBebida != 'L' &&
					tipoDeBebida != 'R' &&
					tipoDeBebida != 'V' 	);
			
			// AGORA QUE TEMOS O TIPO DE BEBIDA
			// VALIDADO, VAMOS DAR A VARIAVEL
			// tipoDeIVA O VALOR CORRESPONDENTE		
			switch ( tipoDeBebida )
			{
				case 'A':
					
					tipoDeIVA = impostoAguas;
					numeroDeIVAs13++;
					
					break;
					
				case 'C':
					
					tipoDeIVA = impostoCerveja;
					numeroDeIVAs23++;
					
					break;
					
				case 'I':
					
					tipoDeIVA = impostoIogurtes;
					numeroDeIVAs6++;
					
					break;
					
				case 'L':
					
					tipoDeIVA = impostoLeite;
					numeroDeIVAs6++;
					
					break;
					
				case 'R':
					
					tipoDeIVA = impostoRefrigerantes;
					numeroDeIVAs23++;
					
					break;
					
				case 'V':
					
					tipoDeIVA = impostoVinho;
					numeroDeIVAs13++;
					
					break;
					
				default:
					
					printf( "Tipo de bebida invalido!!!" );
					
					break;
					
				
			}
					
			
			// PERGUNTAMOS E VALIDAMOS O PRECO UNITARIO
			do
			{
				printf( precoUnitarioString );
				scanf( " %f", &precoUnitario );
				fflush( stdin );
				
			} while ( precoUnitario <= 0 );
			
			// PERGUNTAMOS E VALIDAMOS A QUANTIDADE
			do
			{
				printf( quantidadeString );
				scanf( " %d", &quantidade );
				fflush( stdin );
				
			} while ( quantidade <= 0 );
			
			// APRESENTAMOS O PRECO TOTAL SEM O IVA E O TIPO DE IVA
			valorSemIva = quantidade * precoUnitario;
			valorDeIVA = (float) (tipoDeIVA/100.0) * valorSemIva;
			printf( itemPrecoString, valorSemIva, tipoDeIVA, valorDeIVA);
			
			// ATUALIZAR O VALOR TOTAL A PAGAR E A PARTE 
			// DESSE VALOR PERTENCENTE AO IVA
			valorAPagar += ( valorSemIva + valorDeIVA);
			parteDoIVA  += valorDeIVA;

		} // FIM DO CICLO FOR PARA PROCESSAR TODAS AS BEBIDAS
		
		// VERIFICAMOS SE O VALOR DO IVA E MAXIMO
		if ( parteDoIVA > valorMaxDeIVA )
		{
			valorMaxDeIVA = parteDoIVA;
			strcpy( nomePagouMaisIVA, nome );
		}
		
		// APRESENTAMOS QUANTO PAGA NO TOTAL COM O IVA E A PARTE DO IVA
		printf( pagaString, valorAPagar, parteDoIVA );
		
		// ATUALIZAMOS O VALOR TOTAL DO DIA E A PARTE DE IVA DESSE VALOR
		valorTotalNoFinalDoDia += valorAPagar;
		parteIVAnoValorTotalNoFinalDoDia += parteDoIVA;
		
		// APRESENTAR A STRING DE FIM PARA CADA CLIENTE
		printf( fimDeClienteString, nome );
		
		
		// PASSAR O TOTAL A PAGAR E A PARTE DO IVA
		// DESSE TOTAL A ZERO PARA NO PROXIMO CLIENTE
		// "COMECAR DE NOVO"
		valorAPagar 	= 0.0;
		parteDoIVA 		= 0.0;
		
		
		// PEDIR O NOME E VALIDAR O NOME E SE FOR FIM ENTAO 
		// O PROGRAMA ACABA 
		do
		{
			printf( "Nome do comprador? (Fim para terminar):\n" );
			scanf( " %s", nome );
			fflush( stdin );
		}
		while ( strcmp( nome, "") == 0 );

	}
	
	
	printf( resumoProgString );
	printf( pessouPagouMaisString, nomePagouMaisIVA, valorMaxDeIVA );
	printf( pagaramString, valorTotalNoFinalDoDia, parteIVAnoValorTotalNoFinalDoDia );
	printf( produtosIVAString, numeroDeIVAs6, numeroDeIVAs13, numeroDeIVAs23);
	printf( fimProgString );
	
	
	
	return 0;
}
