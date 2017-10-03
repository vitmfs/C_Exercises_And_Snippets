#include<stdio.h>
int main()
{
	
	int nelem, i, ncrias, nadultos, rend, rendfam=0; /*todas as somas tem que começar=0*/
    float rendref;
   
 
 	do
 	{
	 	printf("Quantos elementos do agregado familiar (0 para terminar)? ");
    	scanf("%d", &nelem);
	}
	while(nelem<0);
	
	   while(nelem!=0)
    {
       do
       {
           printf("\n\nQuantas criancas neste agregado familiar? ");
           scanf("%d", &ncrias);
       }
       while(ncrias<0);
       
      nadultos=nelem-ncrias;
      
   		/*rendfam=0;*/
       for(i=1;i<=nadultos;i++)
       {
          do
          {
             printf("\n\nQual o rendimento iliquido arredondado em euros do %d adulto? ", i);
             scanf("%d", &rend);
          }
          while(rend<0);
          
          rendfam=rendfam+rend;
      
       }
       
       printf("\n\nO rendimento iliquido desta familia vai ser %d euros", rendfam);
       
       rendref=(float)rendfam/(ncrias+1);
       
       printf("\n\nO rendimento de referencia desta familia vai ser %4.2f euros", rendref);
       
       if(rendfam*14<2496.2)
       {printf("\n\nFamilia no 1o escalao!\n");}
       else if(rendfam*14<4992.4)
       {printf("\n\nFamilia no 2o escalao!\n");}
       else if(rendfam*14<7488.6)
       {printf("\n\nFamilia no 3o escalao!\n");}
       else if(rendfam*14<12481)
       {printf("\n\nFamilia no 4o escalao!\n");}
       else if(rendfam*14<24962)
       {printf("\n\nFamilia no 5o escalao!\n");}
       else 
       {printf("\n\nFamilia no 6o escalao!\n");}
       
       do
 		{
		 	printf("\n\n\nQuantos elementos do agregado familiar (0 para terminar)? ");
    		scanf("%d", &nelem);
		}
		while(nelem<0);
 
      	
    }
    
    
    system("pause");
}
