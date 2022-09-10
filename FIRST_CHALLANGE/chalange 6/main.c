#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double F , C;
	// demande la temprature en Fahrenheit 
	printf("Entre la temprature en Fahrenheit  !! \n ");
	scanf("%lf",& F);
    C = (F-32)*1.8 ;
   printf("%lf",C);
   return 0;
}
