/********************************************
* Titre: Travail pratique #5 - GestionnaireProduits.h
* Date: 9 mars 2018
* Auteur: Ryan Hardie
*******************************************/

#ifndef GESTIONNAIREPRODUITS_H
#define GESTIONNAIREPRODUITS_H

#pragma once
#include <vector>
#include "GestionnaireGenerique.h"
#include "Produit.h"
#include "Foncteur.h"
#include <functional>
#include <map>


using namespace std;

class GestionnaireProduits : public GestionnaireGenerique <Produit, multimap<int,Produit*> , AjouterProduit, SupprimerProduit>
{
public:

	
	void reinitialiserClient();
	void reinitialiserFournisseur();
	void afficher() const;
	double obtenirTotalAPayer();
	double obtenirTotalApayerPremium();
	Produit* trouverProduitPlusCher() const;
	vector<pair<int, Produit*>> obtenirProduitsEntre(double borneInf,double borneSup);
	Produit* obtenirProduitSuivant(Produit* product) const;



};

// TODO : Cr�er la classe GestionnaireProduits
// TODO : M�thodes :
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