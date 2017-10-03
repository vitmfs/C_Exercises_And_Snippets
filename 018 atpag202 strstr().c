#include <stdio.h>
#include <string.h>


int main()
{
   const char haystack[20] = "TutorialsPoint";
   const char needle[10] = "Point";
   
   char *ret;

   ret = strstr(haystack, needle);

   printf("The substring is: %s\n", ret);
   printf("The substring is: %c\n", *ret);
   
   
   
    char um[20]="algoritmia";
	char dois[20]="Aula de algoritmia";
	char *onde=strstr(dois,um);
	
	printf ("\n%s em %s aparece no %c",um, dois, onde);
	
	char onde2=strstr( um, dois);
	if (onde2!=0)
	printf ("\n%s em %s aparece no %d\n",dois, um,onde2);
	else
	printf ("\n%s em %s nao aparece \n",dois, um);
	
	getchar();

   
   return(0);
}
