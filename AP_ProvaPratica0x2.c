#include <stdio.h>

int main()
{
	printf("Bem-vindo ao programa de gestao de torneios de tenis!\n");
	/*
		Declaramos o nome que � um array de chars com um tamanho que n�s damos, pode ser 50 chars
		Declaramos e inicializamos a idade que � do tipo int e podemos inicializar a 0
		Declaramos contadores que v�o guardar o n� de Iniciados, Infantis, Cadetes e J�niores
		
	*/
	char nome[50];
	int idade = 0;
	int contadorIniciados = 0;
	int contadorInfantis = 0;
	int contadorCadetes = 0;
	int contadorJuniores = 0;
	
	/*
		Declaramos vari�veis para guardar o nome do aluno mais velho e a sua idade;
		inicializamos "ao contr�rio"; a idade maior inicializamos a zero
		Declaramos vari�veis para guardar o nome do aluno mais novo e a sua idade;
		inicializamos "ao contr�rio"; a idade menor inicializamos a um n�mero grande
	*/
	char nomeMaisVelho[50];
	int idadeMaior = 0;
	char nomeMaisNovo[50];
	int idadeMenor = 999;
	
	
	/*
		Este � o primeiro do while que repete enquanto o nome for diferente de "fim
		e enquanto a idade n�o tiver l�gica (for menor que 0 ou maior que 18 anos; 
		segundo o enunciado) dentro do ciclo do while o fflush(stdin) "limpa" o buffer de entrada de dados, 
		pede-se e recebe-se o nome e limpa-se o buffer outra vez; 
		se o nome n�o f�r "fim" (strcmp("String1", "fim") retorna um int 
		diferente de 0, ent�o pede-se e insere-se a idade. O ciclo do while dentro do ciclo while
		principal � exactamente igual a este
	*/
	do
	{
		fflush(stdin);
		printf("\nInsira o nome: ");
		gets(nome);
		//printf(nome);
		
		fflush(stdin);
		
		if ( (strcmp(nome, "fim") != 0 ) )
		{
			printf("\nInsira a idade: ");
			scanf(" %d", &idade);
			
		}
		
	}
	while ( (strcmp(nome, "fim") != 0) && (idade > 18) && (idade <= 0) );
	
	
	while ( (strcmp(nome, "fim") != 0) ) 
	{
		
		/*
			Enquanto o nome f�r diferente de fim testamos a idade
			e aumentamos o contador correspondente
		*/
		if (idade <= 12)
		{
			printf("\n%s sera inserido nos Iniciados!\n", nome); 
			contadorIniciados++;
			//printf("%d Iniciados!", contadorIniciados); 
		} 
		else if (idade <= 14)
		{
			printf("\n%s sera inserido nos Infantis!\n", nome); 
			contadorInfantis++;
			//printf("%d Infantis!", contadorInfantis); 
		}
		else if (idade <= 16)
		{
			printf("\n%s sera inserido nos Cadetes!\n", nome); 
			contadorCadetes++;
			//printf("%d Cadetes!", contadorCadetes); 
		}
		else if (idade <= 18)
		{
			printf("\n%s sera inserido nos Juniores!\n", nome); 
			contadorJuniores++;
			//printf("%d Juniores!", contadorJuniores); 
		}
		else
		{
			printf("Essa idade nao e valida, por favor tente de novo!"); 
		}
		
		/*
			Testamos a idade para ver se se s�o o mais velho ou o mais novo,
			se forem guardamos o nome e a idade nas vari�veis correspondentes
		*/
		/*
			Se a idade do jogador f�r maior do que a do jogador mais velho,
			o jogador passa a ser o mais velho
		*/
		
		if (idade > idadeMaior) 
		{
			strcpy(nomeMaisVelho, nome);
			idadeMaior = idade;
			
		}
		
		/*
			Se a idade do jogador f�r menor do que a do jogador mais novo
			o jogador passa a ser o mais novo
		*/
		
		if (idade < idadeMenor)
		{
			strcpy(nomeMaisNovo, nome);
			idadeMenor = idade;
			
		}
		

		
		
		/*
			Este ciclo do while � exactamente igual ao primeiro do while,
			no �n�cio do programa, � usado para actualizar as vari�veis nome e idade
			a vari�vel idade ir� ser testada para ver se o ciclo while continua ou n�o
		*/
		do
		{
			fflush(stdin);
			printf("\nInsira o nome: ");
			gets(nome);
			//printf(nome);
				
			fflush(stdin);
			if ( (strcmp(nome, "fim") != 0 ) )
			{
				printf("\nInsira a idade: ");
				scanf(" %d", &idade);
					
			}
		}
		while ( (strcmp(nome, "fim") != 0) && (idade > 18) && (idade <= 0) );
		
	
	}
	
	/*
		Declaramos uma vari�vel para guardar o n�mero total de participantes
	*/
	int totalParticipantes = contadorIniciados + contadorInfantis + contadorCadetes + contadorJuniores;
	
	/*
	printf("%d Iniciados!", contadorIniciados); 
	printf("%d Infantis!", contadorInfantis); 
	printf("%d Cadetes!", contadorCadetes); 
	printf("%d Juniores!", contadorJuniores); 
	printf("%d Participantes!", totalParticipantes); 
	
	float percIniciados = (contadorIniciados/totalParticipantes) * 100.0;
	*/
	
	printf("\nIniciados com %4.2f %% dos participantes!", (float)contadorIniciados/totalParticipantes * 100);
	printf("\nInfantis com %4.2f %% dos participantes!", (float)contadorInfantis/totalParticipantes * 100);
	printf("\nCadetes com %4.2f %% dos participantes!", (float)contadorCadetes/totalParticipantes * 100);
	printf("\nJuniores com %4.2f %% dos participantes!", (float)contadorJuniores/totalParticipantes * 100);
	
	printf("\n%s vai ser o jogador mais velho com %d anos!", nomeMaisVelho, idadeMaior);
	printf("\n%s vai ser o jogador mais novo com %d anos!", nomeMaisNovo, idadeMenor);
	
	
	
	
	
	
	
	
	
	
	/*
		Colocamos um getchar() para o programa n�o acabar logo e ficar � espera de o utilizador
		carregar numa tecla; a fun��o main() tem de retornar um int por isso colocamos return 0;
	*/
	getchar();
	return 0;
}
