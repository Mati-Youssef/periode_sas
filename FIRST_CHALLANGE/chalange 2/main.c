#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double F ;
	float degre_C;
	// demande la température en degré C
	printf("Entre la temperature !! \n ");
	scanf("%f",&degre_C);
	F = (degre_C*1.8)+32 ;
	printf("F = : %lf",F);
   return 0;
}
