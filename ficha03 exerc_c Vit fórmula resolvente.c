#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c;
 
    printf("Insira o coef. a: ");
    scanf("%d", &a);
    printf("Insira o coef. b: ");
    scanf("%d", &b);
    printf("Insira o coef. c: ");
    scanf("%d", &c);
    
    
    
    if (pow(b,2)-4*a*c<0)
    printf("\nA eq. nao tem solucoes!\n\n");
    else if (pow(b,2)-4*a*c==0)
    printf("Solução unica = %4.2f", -b/(2*a));
    else {
    float x1=(float)(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
    float x2=(float)(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
    printf("As sol. vao ser: x=%4.2f e x=%4.2f", x1, x2);}
    


system ("\npause");

}
