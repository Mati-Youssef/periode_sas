#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char Nom[10] , Prenom[10],sexe[10];
	int age , Num_tele ;
	// demande le nom 
	printf("ecrivez votre nom !! \n ");
	scanf("%s",Nom);
    // demande le prenom 
	printf(" ecrivez votre prenom !! \n");
	scanf("%s",Prenom);
	// demande  l'age 
	printf(" quel age as-tu !! \n");
	scanf("%d",&age);
	// demande le type sexe 	
	printf(" votre sexe !! \n");
	scanf("%s",sexe);
	// demande le telephone 
	printf(" ecrivez votre numero de telephone !! \n");
	scanf("%d",&Num_tele);
	// afficher les informations 
	printf("votre information est : \n votre nom est le prenom %s %s \n est ton age est %d \n sexe: %s \n numero de telephone : %d \n",Nom ,Prenom,age,sexe,Num_tele);
	return 0;
}
