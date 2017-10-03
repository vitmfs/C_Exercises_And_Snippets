#include <stdio.h>
#include <stdlib.h>
main()
{
    int i;
    int num[30];
    int num_min=9999;
    int num_max=0;
    
    for(i=1;i<=30;i++){
        
        printf("Escreva o proximo numero\n");
        scanf("%d",&num[i]);
        while(num[i]<=0 && num[i]>100);
        
        if(num[i]<num_min){
            num_min=num[i];        
            }
        if(num[i]>num_max){
            num_max=num[i];
        }
    }
    printf("Os numeros em ordem inversa:\n");
    for(i=30;i>=1;i--){
        
        printf("%d\n",num[i]);
    }
    
    printf("O numero maior e %d\n",num_max);
    printf("O numero menor e %d\n",num_min);
    
    system("pause");
}
