/********************************************
* Titre: Travail pratique #5 - GestionnaireProduits.h
* Date: 9 mars 2018
* Auteur: Ryan Hardie
*******************************************/

#ifndef GESTIONNAIREPRODUITS_H
#define GESTIONNAIREPRODUITS_H

#include <vector>
#include "GestionnaireGenerique.h"
#include "Produit.h"
#include "Foncteur.h"
#include <functional>
#include <map>
#include "ProduitAuxEncheres.h"
#include "ProduitSolde.h"


using namespace std;

class GestionnaireProduits : public GestionnaireGenerique<multimap<int, Produit*>, Produit , AjouterProduit, SupprimerProduit>
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

#endif // !GESTIONNAIREPRODUITS_H