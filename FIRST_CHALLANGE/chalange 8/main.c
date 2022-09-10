#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a ,b, c, d , sum , moyenne ;
    printf("entre premier numbre \n");
    scanf("%d",&a); 
    printf("entre premier numbre \n");
    scanf("%d",&b);
    printf("entre premier numbre \n");
    scanf("%d",&c);
    printf("entre premier numbre \n");
    scanf("%d",&d);
    sum = a+b+c+d ;
    printf("la somme est %d \n" , sum);
    moyenne = sum/4 ;
    printf("la moyenne  est %d \n" , moyenne);

   return 0;
}
