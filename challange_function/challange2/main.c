#include <stdio.h>
#include <stdlib.h>

int main(){
	echange(2,3);
}

void echange(int a, int b){
	int c=0;
	c=a ;
	a=b;
	b=c;
printf("la valeur de a = %d \n et la valeur de b = %d" , a , b);	
}
