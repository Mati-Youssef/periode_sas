#include <stdio.h>
 int main(){
     int a,b,c,d;
 printf("entre la premier numbre \n");
 scanf("%d",&a);
  printf("entre la deuxeme numbre \n");
  scanf("%d",&b);
 c= sum(a,b);
 printf(" la somme de les deux  nummber est :%d \n",c );
 d = triple(c);
 printf("le triple de la somme est  : %d" ,d);

 }
 // la somme

 int sum(int a,int b){

  return a+b ;
 }
// triple

 int triple(int x){
  ;
 return x*3;
 }
