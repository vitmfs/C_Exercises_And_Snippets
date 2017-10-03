#include <stdio.h>
#include <stdlib.h> // para o uso da funcao System()
#include <string.h>

int main ()
{
	int num,qt,valor,i;
	float max=0;
	int numMax;
	float media;
	int qts=0,vls=0;
	int ua=0,ur=0,uo=0, ug=0, um=0;
	char uc[1];
	int nota;
	
	// pede o numero do aluno (num)
	do{
		printf ("\nIntroduza o numero do aluno: (0 para fim)mmmm: ");
		scanf("%d",&num); 
	}
	while (num<0);
	
	// Enquanto existir o aluno, executa os restantes passos
	while (num!=0){
		
		// numero de UC realizadas (qt)
		do{	 
			printf ("\nQuantos ucs fez o aluno %d? (1 a 5): ", num);
			scanf("%d",&qt); 
		}
		while (qt<1 || qt>5); // repete enquanto qt for superior a 0 e inferior ou igual a 5
		
		valor=0; // variavel inicializada 
		
		int num_ucs = qt;
		
		// percorre o numero de UC 
		for (i=1;i<=num_ucs;i++){
			
			// Identifica a UC - pela maiuscula associada a cada UC
			do{
				printf("\n(A)lgoritmia, A(R)quitetura");
				printf("\n(O)ficinas, (M)atematica, Or(G)anizacao");
				printf("\n----------------------------------------");
				printf ("\nQual das ucs (%d)? ", i);
				scanf("%s",&uc); 
			}
			while (strcmp(uc,"A")!=0 && strcmp(uc,"R")!=0 && strcmp(uc,"O")!=0 && strcmp(uc,"M")!=0 && strcmp(uc,"G")!=0);
			
			// nota da UC
			do{
				printf ("\nQual a nota da uc(%d)[entre 0-20]? ", i);
				scanf("%d",&nota); 
			}
			while (nota<0 || nota>20);
			
			// para cada UC, vai atribuir o valor da nota
			if (strcmp(uc,"A")==0){
				valor=valor+nota; 
				ua++;
			}else 
				if (strcmp(uc,"R")==0){
					valor=valor+nota; 
					ur++;
				}else
					if (strcmp(uc,"O")==0){
						valor=valor+nota; 
						uo++;
					}else
						if (strcmp(uc,"M")==0){
							valor=valor+nota; 
							um++;
						}else{	/* por exclusao, sera a G */
							valor=valor+nota; 
							ug++;
						}
		}
	
		media=(float)valor/num_ucs;
		
		if (max<media){
			max=media;
			numMax=num;
		}
		qts++;
		vls=vls+media;
		
		printf ("\nO aluno %d fez %d uc com uma media de %4.2f", num, num_ucs, media);
		
		do{
			printf ("\nIntroduza o numero do aluno: (0 para fim)");
			scanf("%d",&num); 
		}while (num<0);
	}
	
	printf ("\nO aluno %d tem a melhor media = %4.2f ", numMax, max);
	float vmedio=(float)vls/qts;
	
	// imprime os resultados finais
	// -------------------------------------------------
	printf("\n**********");
	printf("\nConsideramos %d alunos",qts);
	printf ("\nMedia de notas foi de %4.2f", vmedio);
	printf("\n**********");
	printf("\nUnidades Curriculares e numero de alunos com aproveitamento");
	printf ("\nAlgoritmia %d alunos", ua);
	printf("\nArquitetura %d alunos",ur);
	printf("\nOficinas %d alunos", uo);
	printf("\nMatematica %d alunos",um);
	printf("\nOrganizacao %d alunos", ug);
	printf("\n**********");
	system("pause");
	// -------------------------------------------------
	
	/* 
	-- Alternativa ao System("pause"): --
	
	printf("Press enter to continue...\n");
	getchar();
	
	-- Nao era necessario a inclusao da biblioteca stdlib.h
	*/
}
