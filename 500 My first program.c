#include<stdio.h> 							//indica ao compilador que ele deve incluir o ficheiro stdio.h

/*First Program*/

int main()									//todos os programas em C t�m de ter uma fun��o main(), pois � esta fin��o que � chamada quando o programa � executado; a palavra int indica que esta fun��o devolve um valor inteiro
{											//conte�do da fun��o delimitado por chavetas
	printf("Hello! My first program!\n");	//chama a fun��o printf() usando a String "Hello! My first program!\n" como argumento; � por causa da fun��o printf() que � necess�rio incluir o ficheiro stdio.h
	return(0);								//indica o n�mero inteiro que est� a ser devolvido pela fun��o, neste caso 0
	
}											//conte�do da fun��o delimitado por chavetas
