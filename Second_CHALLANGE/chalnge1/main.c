#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//Paire ou Impaire
int num ;
printf ("donne un numbre : \n");
scanf("%d",&num);
if (num%2==0)
{
	printf("le numbre entre est paire");
}
else
{
	printf("le numbre entre est impaire");
}
return 0;
}
