/*Description: The strtok() function returns a pointer to the next "token" in str1, where str2 contains the delimiters that determine the token. 
strtok() returns NULL if no token is found. In order to convert a string to tokens, 
the first call to strtok() should have str1 point to the string to be tokenized. 
All calls after this should have str1 be NULL.*/


#include<stdio.h>
int main()
{
    char texto[] ="Um exemplo? Com caracteres, sinais ou outros!?!";	//texto original
    char * pch;															//array de tokens
    char nova[80]="";
    char * sinais=",!?;.";												//sinais para separar
    printf ("\nString inicial: %s\n",texto);
    pch = strtok (texto,sinais);										//separa o texto pelo sinais e devolve token
    
    
    while (pch != NULL)													//enquanto o token existir
    { 
		strcat(nova, pch);
    	pch = strtok (NULL, sinais); 
	}
	
    printf("String nova: %s\n",nova);
    
    
    
	char str[80] = "This is - www.tutorialspoint.com - website";		//texto original
    const char s[2] = "-";												//sinal para separar
    char *token;														//array de tokens
   
    /* get the first token */
    token = strtok(str, s);												//separa o texto pelo sinais e devolve token
   
    /* walk through other tokens */
    while( token != NULL ) 												//enquanto o token existir
    {
       printf( " %s\n", token );
    
       token = strtok(NULL, s);
    }
   
    system("pause");
}
