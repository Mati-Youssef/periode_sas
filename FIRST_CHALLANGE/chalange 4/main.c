#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double MILE;
	// demande demande la distance en Mile
	printf("Entre la distance en Mile !! \n ");
	scanf("%lf",& MILE);
    MILE *= 1609,34;
	printf(" en MILE = : %lf",MILE);
   return 0;
}
