#include <stdio.h>
#include <stdlib.h>
// function pour vérifier si un nombre il est premier ou non
bool isPremier(int num){
	bool test=true ;
	int i ;
	if(num<2)
	{
    	test= true 	;
	} 
	else
	{
		for (i=3 ; i < num ;i++)
		{
	    	if(num%2 != 0)
			{
			test= true ;
			}
		else
			{
			test = false ;
			}
		}
	}
	
	return test ;
}
//""""""""""""""""
//function qui retoune la division des deux valeurs.
 bool divededby(int n,int a) 
 {
 	bool test ;
 	int result ;
 	result = n/a ;
 	test=isPremier(result);
 	return test;
 	
 }
 //""""""""""""""""""""""""""""""
 // function MAin
int main(){
	bool test = divededby(20,10);
	(test==false)? printf("le nombre il ne sont pas un numbre premier "): printf("le nombre il est premier");
}
	

