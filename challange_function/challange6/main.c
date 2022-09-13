#include <stdio.h>
#include <stdlib.h>

 //Ecrivez un programme pour stocker et imprimer
 // le numéro de matricule, le nom, l'âge et les notes d'un étudiant en utilisant des structures.
 struct etudiant
 {
    char nom[15] ;
    double matricule ;
    int age ;
    float note ;
 };

int main(){

 struct etudiant Etud1={"youssef",2344,25,23};
 printf("your name is %s \n and you have this matricule %.0lf \n your age is %d \n your note is %.2f " ,Etud1.nom,Etud1.matricule,Etud1.age,Etud1.note );
}

