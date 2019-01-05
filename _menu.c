#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "_menu.h"
#include "_villes.h"

void cleanBuffer(){
    int n;
    while((n = getchar()) != EOF && n != '\n' );
}

void menu_villes()
{

    int choix = 0;
    do
    {

        do
        {
        printf(" MENU : \n");
        printf("1. Afficher un trajet trouve \n");
        printf("2. Afficher tous les trajets trouves \n");
        printf("3. Afficher les trajets les plus courts .txt\n");
        printf("4. Afficher les trajets les plus rapides .txt\n");
        printf("5. Afficher l'arbre des trajets \n");
        printf("6. Quitter \n");

        scanf("%d", &choix);
        cleanBuffer();
        }  while ((choix>6)||(choix<=0));

        if (choix == 1) // Chiffrer un mot------------------------------------------------------------------------------------------------------
        {


            printf("\n"); // esthetique

        }

        if (choix == 2) // Dechiffrer un mot------------------------------------------------------------------------------------------------------
        {


            printf("\n"); // esthetique
        }

        if (choix == 3) // Chiffrer un fichier .txt ------------------------------------------------------------------------------------------------------
        {

                printf("\n"); // esthetique

        }

        if (choix == 4) // Dechiffrer un fichier . txt ------------------------------------------------------------------------------------------------------
        {

                printf("\n"); // esthetique
        }

        if (choix == 5) // Nouvelle methode de chiffrement ------------------------------------------------------------------------------------------------------
        {

                printf("\n"); // esthetique
        }


    } while (choix!=6);// Quitter si choix ==6

}













