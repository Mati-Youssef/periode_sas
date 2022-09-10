#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	// Circonférence d'un rectangle
	double longueur , largeur;
	printf(" entre la longueur et largeur  de rectangle  \n");
	scanf("%lf %lf", &longueur ,&largeur);
	printf(" Circonférence d'un rectangle est : %.2lf \n",2*(longueur+largeur));

return 0;
}
