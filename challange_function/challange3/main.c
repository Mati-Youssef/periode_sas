#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
// function pour vérifier si un nombre il est premier ou non
bool isPremier(int num){
	bool test=true ;
	int i ;
	
/*	if(num<2)
	{
    	test= false 	;
	} 
	else
	{
		for (i=2 ; i < num ;i++)
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
	}*/
	
	if (num<=1){
		test= false 	;
	}
	else
	{
	    
	  for (i=2;i<=sqrt(num); i++)            
	  {
	  	if(num%i != 0)
		  {
		  	test = true ;
		  }
		  else 
		  {
		  	test= false ;
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

