#include<stdio.h>
int main()
{
    int i;
    int x[5];
    printf ("Introduza 5 numeros, p.f\n");
    
    for (i=0; i<5;i++)
    {
        printf ("\nIntroduza o numero %d: ",(i+1));
        scanf("%d", &x[i]); 
    }
        
        
    printf ("Os cinco numeros introduzidos foram:\n");
        
    for (i=0; i<5;i++)
    {
        printf ("%d numero=%d\n",(i+1),x[i]);
    }
        
    printf ("Os cinco numeros introduidos inverso foram:\n");
        
    for (i=4; i>=0;i--)
    {
        printf ("%d numero=%d\n",(i+1),x[i]);
    }
        
    int soma=0;
        
    for(i=4; i>=0;i--) {
    	
    	soma=soma+x[i];
	}
    
        
    float media = (float) soma/5;
    printf ("A soma dos numeros = %d: \n",soma);
    printf ("A media dos numeros = %4.2f: \n",media);
    
    system("pause");
}
        
        
