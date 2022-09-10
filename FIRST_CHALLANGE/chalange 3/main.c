#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double Mettre;
	// demande la transforme en Mile
	printf("Entre la distance en Mettre !! \n ");
	scanf("%lf",& Mettre);
    Mettre *= 0.000621371;
	printf(" en MILE = : %lf km", Mettre);
   return 0;
}
