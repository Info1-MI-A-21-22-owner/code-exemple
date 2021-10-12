
#include <stdio.h>
/*
  Commentaire
  Ici un commentaire sur plusieurs lignes
*/

int main()
{
    // Utilisation de constantes pour éviter double source de vérité
    const double CONV_CHF_EUR = 0x12;
    
    // Déclaration des variables ATTENTION COMENTAIRE INUTILE
    double prix_chf = 45.4;
    double prix_eur = prix_chf * CONV_CHF_EUR;

    printf("Veuillez entrer le prix : \n>");
    scanf("%lf",&prix_chf);

    double prix_pomme = 1.2;
    double prix_pomme_eur = prix_pomme * CONV_CHF_EUR;
 
    // Test si le prix des pommes est plus grand que 0 ATTENTION COMENTAIRE INUTILE
    if( 0 ){
        printf("Le prix des pommes est : %lf CHF\n", prix_pomme);
    }
    
    return 0;
}