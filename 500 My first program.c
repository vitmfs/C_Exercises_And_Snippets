#include<stdio.h> 							//indica ao compilador que ele deve incluir o ficheiro stdio.h

/*First Program*/

int main()									//todos os programas em C têm de ter uma função main(), pois é esta finção que é chamada quando o programa é executado; a palavra int indica que esta função devolve um valor inteiro
{											//conteúdo da função delimitado por chavetas
	printf("Hello! My first program!\n");	//chama a função printf() usando a String "Hello! My first program!\n" como argumento; é por causa da função printf() que é necessário incluir o ficheiro stdio.h
	return(0);								//indica o número inteiro que está a ser devolvido pela função, neste caso 0
	
}											//conteúdo da função delimitado por chavetas
