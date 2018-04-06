/********************************************
* Titre: Travail pratique #5 - GestionnaireProduits.h
* Date: 9 mars 2018
* Auteur: Ryan Hardie
*******************************************/
#ifndef GESTIONNAIREPRODUITS_H
#define GESTIONNAIREPRODUITS_H
#pragma once

#include "GestionnaireGenerique.h"

using namespace std;

class GestionnaireProduits : public GestionnaireGenerique<Usager,set<Usager*>,ajouterUsager,FoncteurSupprimerUsager>
{
public:
	GestionnaireProduits();
	void reinitialiserClient();

private:

};

// TODO : Créer la classe GestionnaireProduits
// TODO : Méthodes :
/*
- reinitialiserClient();
- reinitialiserFournisseur();
- afficher();
- obtenirTotalAPayer();
- obtenirTotalApayerPremium();
- trouverProduitPlusCher();
- obtenirProduitsEntre();
- obtenirProduitSuivant();
*/
#endif