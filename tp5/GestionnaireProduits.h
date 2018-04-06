/********************************************
* Titre: Travail pratique #5 - GestionnaireProduits.h
* Date: 9 mars 2018
* Auteur: Ryan Hardie
*******************************************/

#ifndef GESTIONNAIREPRODUITS_H
#define GESTIONNAIREPRODUITS_H

#pragma once

#include "GestionnaireGenerique.h"
#include <functional>

using namespace std;

class GestionnaireProduits : public GestionnaireGenerique<Produit,multimap<int,Produit*>,AjouterProduit,SupprimerProduit>
{
public:

	void reinitialiserClient();
	void reinitialiserFournisseur();
	void afficher() const;
	double obtenirTotalAPayer();
	double obtenirTotalApayerPremium();
	Produit* trouverProduitPlusCher() const;
	vector<pair<int, Produit*>> obtenirProduitsEntre(double borneInf,double borneSup) const;
	Produit* obtenirProduitSuivant(Produit* product) const;

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
#endif // !GESTIONNAIREPRODUITS_H