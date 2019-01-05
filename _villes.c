#include "_villes.h"


bool verif_ville(char ville_depart[])
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







void rentrer_ville()
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









