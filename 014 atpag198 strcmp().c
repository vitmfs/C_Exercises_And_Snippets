#include<stdio.h>
int main()
{
    char Nome[20]="Aula de ";
    char v=strcmp("Aula de","Aula de");
    printf ("\nstrcmp(Aula de,Aula de)= %d\n", v);
    char x=strcmp("Joao","Andre");
    printf ("\nstrcmp(Joao,Andre)= %d\n", x);
    char z=strcmp("Joao","Ze");
    printf ("\nstrcmp(Joao,Ze)= %d\n", z);

    system("pause");
}
