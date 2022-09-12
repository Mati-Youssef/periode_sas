#include <stdio.h>
#include <stdlib.h>
//Challenge 11 : Année Bissextile

//""""""""""""""""""""""""""
// function is_leap_year()
bool is_leap_year(int anne)
{
 bool test ;
 if( (anne%4==0 && anne%100!=0) || anne%400 ==0)
 {
	 	test = true ;//..........................................................................................................................................................................................................................................................
 } 
 else
 {
        test =false ;	
 } 
  return test ; 
  
}
//''''''''''''''''''''''''''''''''''
// function main 
//''''''''''''''''''''''''''''''''''

int main()
{
 int year;
 bool test ;
 printf(" saisir une annee entre 1800 et 10000 \n ");
 scanf("%d",&year);
 test = is_leap_year(year);
 if (test==true){
 	printf(" %d est bissextile ",year);
 }
 else 
 {
    printf("%d ne pas bissextile",year);
 }
}

