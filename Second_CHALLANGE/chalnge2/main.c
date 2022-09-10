#include <stdio.h>
#include <stdlib.h>
 int main()
 {
     char entre ;

    printf("=============== \n");
    printf("entre un caracter : \n");
    scanf("%c",&entre);
    switch(entre)
    {
    case 'a':
        printf(" caractère voyelle ");
        break;
    case 'e':
        printf(" caractère voyelle ");
        break;
    case 'i':
        printf(" caractère voyelle ");
        break;
    case 'o':
        printf(" caractère voyelle ");
        break;
    case 'u':
        printf(" caractère voyelle ");
        break;
    case 'y':
       printf(" caractère voyelle ");
        break;
    default :
        printf("ne pas un caractere voyelle ");
 }
 }
