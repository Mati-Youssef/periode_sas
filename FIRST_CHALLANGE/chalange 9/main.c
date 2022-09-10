#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int M[1],N[1];
	double result ;
	printf("entre la 1.1 point \n ");
	scanf ("%d",&M[0]);
	printf("entre la 1.2 point \n ");
	scanf ("%d",&M[1]);
	printf("entre la 2.1 point \n ");
	scanf ("%d",&N[0]);
	printf("entre la 2.2 point \n ");
	scanf ("%d",&N[1]);
	

   result =  sqrt( pow((N[0]-M[0]),2 ) + pow((N[1]-M[1]),2) );
   printf(" Distance entre deux points : %lf", result) ;
   return 0;
}
