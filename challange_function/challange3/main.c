#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
// function pour vérifier si un nombre il est premier ou non
bool isPremier(int num){
	bool test=true ;
	int i ;
	if(num<=2)
	{
    	test= true 	;
	} 
	else
	{
		for (i=3 ; i < num ;i++)
		{
	    	if(num%2 == 0)
			{
			test= false ;
			}
		else
			{
			test = true ;
			}
		}
	}
	
	return test ;
}

//"""""""""""""""""""""""""""""""""""

int main(){
	bool test ;
	int numbre ;
 printf("donne un numbre : \n");
 scanf("%d",&numbre);	
   test=isPremier(numbre);
   (test==false)? printf("le nombre il ne sont pas un numbre premier "): printf("le nombre il est premier");
}

