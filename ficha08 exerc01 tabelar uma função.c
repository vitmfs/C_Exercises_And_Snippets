#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{ 
    int a, b, c, d, i;
    float x, y, fx, sum;
    
    printf("a = ");
    scanf("%i", &a);    
    printf("b = ");
    scanf("%i", &b);
    printf("c = ");
    scanf("%i", &c);
    printf("d = ");
    scanf("%i", &d);

    sum=0;
    
    for(x=a;x<=b;x=x+0.25)
    {
        for(y=c;y<=d;y=y+0.25)
        {

        fx=0;            
        
        for (i=1; i<=20;i++)
        
        fx=fx+sin(x*x+pow(x,i)*pow(y,i));
        
        
        printf("f(%.2f, %.2f) = %.2f\n", x, y, fx);

        }
    
    }
    

    system ("pause");
}
