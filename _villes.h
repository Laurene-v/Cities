#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#ifndef _VILLES_H_INCLUDED
#define _VILLES_H_INCLUDED


typedef struct _noeud
{
int valeur ;
struct _noeud * pere ; // accès au parent
struct _noeud * fils_gauche ;
struct _noeud * fils_droite ;
} noeud ;

typedef struct
{
int duree ;
int longueur;
struct _noeud * ville_depart;
struct _noeud * ville_arrivee;

} connexion ;

bool verif_ville(char ville_depart[]);
void rentrer_ville();


/*
//affichage arborescence :
void affichage_arborescence(noeud**arbre, int valeur);

//exo1 :
void insertion(noeud ** p_arbre, int valeur);

// exo2 :
noeud * recherche(noeud* arbre, int valeur);

//exo3 :
noeud* minimum(noeud * arbre);
noeud* maximum(noeud * arbre);

*/













#endif // _VILLES_H_INCLUDED
