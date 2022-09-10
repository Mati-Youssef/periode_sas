#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	// Circonférence d'un cercle
	double R ,C;
	printf(" entre le rayon de cercle \n");
	scanf("%lf", &R);
	C = 2*3.14*R ;
	printf(" La Circonférence d'un cercle est : %.2lf \n",C);

return 0;
}
