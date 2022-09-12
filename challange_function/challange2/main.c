#include <stdio.h>
#include <stdlib.h>

int main(){
	// function echange 
	echange(2,3);
}
// function pour  échanger la valeur de a avec la valeur de b
void echange(int a, int b){
	int c=0;
	c=a ;
	a=b;
	b=c;
printf("la valeur de a = %d \n et la valeur de b = %d" , a , b);	
}
