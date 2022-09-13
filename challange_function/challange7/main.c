#include <stdlib.h>
#include <stdio.h>


// challange 12

// function  pour copier une chaîne de caractères dans une autre
// en utilisez  utiliserez les pointeurs .

 void f_strcpy(char*chain1[20],char *chain2[20] )
 {
 	*chain2 = *chain1 ;
 	printf("la contune de la table chain2 et : %s",chain2);
 }
 // function main 
int main()
{
	char chain1[20] , chain2[20] ;
	// demande a l'utilisature un chain de caracter
	 
  	printf("entre la premier chaine de caracter : ");
  	scanf("%s",chain1);
  	f_strcpy(&chain1 ,&chain2);
  	
  	
}












