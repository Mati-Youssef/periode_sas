#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double F , C;
	// demande la température en Fahrenheit 
	printf("Entre la temperature en Fahrenheit  !! \n ");
	scanf("%lf",& F);
    C = (F-32)*1.8 ;
    if (C<10)
	{
		printf("tres froid");
	}
	else if ( C<20) 
	{
	   printf("froid");	
	}
    else if ( C>20 && C<35 ) 
	{
	   printf("chaud");	
	}
	else
	{
		printf(" tres chaud");	
	}
   return 0;
}
