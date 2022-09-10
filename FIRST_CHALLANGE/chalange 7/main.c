#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a , b ,sum , mult , div , sub , module;
	printf("Entre la premier valeur  \n ");
	scanf("%d",&a);
    printf("Entre la deuxième valeur  \n ");
	scanf("%d",&b);
    sum = a+b ;
    mult = a*b ;
    div = a/b ;
    sub = a-b ;
    module = a%b ;
    printf("la Somme est : %d \n",sum);
    printf("la multiplication est : %d \n",mult);
    printf("la Subtraction est : %d \n",sub);
    printf("la Division est : %d \n",div);
    printf("la Modulus est : %d \n",module);
   return 0;
}
