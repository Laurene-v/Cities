#include "_villes.h"

bool verif_ville(char ville_depart[]) // verifie que le nom (entre en parametre) est dans la liste
{
    //printf("test_verif_villes \n");
    bool ville_correcte=false;
    char fichier_villes[] = "villes.csv";
    FILE* fichier = fopen(fichier_villes,"r"); // ouverture en lecture (read)
    if( fichier != NULL )
	{
	    char nom_ville[60];
	    bool ville_differente=true;
	    //printf (" longueur %d  \n", strlen(ville_depart));
	    fgets (nom_ville, 60, fichier); //pour sauter le "ville" inscrit en debut de document
	    int i=0;
	    while ((ville_differente)&& (i<24)) //il y a 23 villes au total
        {
            fgets (nom_ville, 60, fichier);

            //------------------tests d'egalite des villes----------------
            int i2=0;
            ville_differente=false;
            //printf("test1_av_while\n");
            while((i2<strlen(ville_depart))&& (ville_differente==false))
            {
                //printf("test2_while\n");
                if (ville_depart[i2]!=nom_ville[i2])
                {
                    ville_differente=true;
                    printf("test3_egalite\n");
                }
                i2++;
            }
            //printf("test4_egalite\n");
            //-------------------------------------------------------------

            printf("villes : %s , ", ville_depart);
            printf("%s ; \n",nom_ville);

            if(ville_differente==false)
            {
                ville_correcte=true;
            }
            i++;
        }
		fclose(fichier); // fermeture du fichier
	}
	else
	{
		printf("Probleme lors de l'ouverture du fichier %s\n", fichier);
	}

	return ville_correcte;
}


void rentrer_ville() // permet a l'utilisateur d'ecrire un nom de ville correct (compris dans la liste)
{
    printf("test_rentrer_ville\n ");
    //char fichier_txt[100];
    char ville_depart[100];
    do
    {printf("Veuillez saisir une ville de depart contenue dans la liste (avec majuscule au debut) \n");
     scanf("%s",ville_depart);
     //cleanBuffer();
    } while(verif_ville(ville_depart)==false);

}



//---pas_fini et pas teste
noeud liste_connexions(char ville_depart[]) //renvoie la liste des villes accessibles directement depuis ville_depart
{
    bool ville_correcte=false;
    char fichier_connexions[] = "connexions.csv";
    FILE* fichier = fopen(fichier_connexions,"r"); // ouverture en lecture (read)
    if( fichier != NULL )
	{
	    char nom_connexion[200];
	    bool continuer_boucle=true;
	    fgets (nom_connexion, 200, fichier); //pour sauter le "ville1, ville2, distance, duree" inscrit en debut de document
	    int i=0;
	    while ((continuer_boucle))
        {

            fgets (nom_connexion, 200, fichier);

            //------------------tests d'egalite ville_depart/debut de la connexion----------------
            int i2=0;
            bool ville_differente=false;
            //printf("test1_av_while\n");
            while((i2<strlen(ville_depart))&& (ville_differente==false))
            {
                //printf("test2_while\n");
                if (ville_depart[i2]!=nom_connexion[i2])
                {
                    ville_differente=true;
                    printf("test3_egalite\n");
                }
                i2++;
            }
            //printf("test4_egalite\n");
            //-------------------------------------------------------------




        }
		fclose(fichier); // fermeture du fichier
	}
	else
	{
		printf("Probleme lors de l'ouverture du fichier %s\n", fichier);
	}

}









