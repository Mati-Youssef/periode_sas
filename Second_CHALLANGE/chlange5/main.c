#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ans ;
    double min , heure , jour ,second ,mois ;
    printf("donne une anne : \n ");
    scanf("%d",&ans);
    if (ans%4 == 0 && ans%100 !=0 && ans%400 != 0){
        mois = 12 ;
        jour = 366 ;
        heure = jour*24 ;
        min= heure *60 ;
        second = min *60 ;
        }
        else{
            mois = 12 ;
        jour = 365 ;
        heure = jour*24 ;
        min= heure *60 ;
        second = min *60 ;
        }
printf(" mois = %lf\n",mois);
printf(" jours = %lf \n",jour);
printf("heures = %lf  \n",heure);
printf(" minutes =%lf \n",min);
printf(" secondes = %lf \n",second);
    return 0;
}
