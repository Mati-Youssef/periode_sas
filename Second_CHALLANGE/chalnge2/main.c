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
        printf(" caract�re voyelle ");
        break;
    case 'e':
        printf(" caract�re voyelle ");
        break;
    case 'i':
        printf(" caract�re voyelle ");
        break;
    case 'o':
        printf(" caract�re voyelle ");
        break;
    case 'u':
        printf(" caract�re voyelle ");
        break;
    case 'y':
       printf(" caract�re voyelle ");
        break;
    default :
        printf("ne pas un caractere voyelle ");
 }
 }
