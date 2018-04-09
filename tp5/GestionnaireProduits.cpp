/********************************************
* Titre: Travail pratique #5 - GestionnaireProduits.cpp
* Date: 9 mars 2018
* Auteur: Ryan Hardie
*******************************************/




#include "GestionnaireProduits.h"
#include "ProduitAuxEncheres.h"
#include <iostream>






void GestionnaireProduits::reinitialiserClient() {
	conteneur_.clear();
}

void GestionnaireProduits::reinitialiserFournisseur() {
	for (auto it = conteneur_.begin(); it !=conteneur_.end(); it++)
	{
		if (ProduitAuxEncheres* ptemp = dynamic_cast<ProduitAuxEncheres*>(it->second)) {
			ptemp->modifierEncherisseur(nullptr);
			ptemp->modifierPrix(ptemp->obtenirPrixInitial());
		}
		it->second->modifierFournisseur(nullptr);
	}
	conteneur_.clear();
}

void GestionnaireProduits::afficher() const {
	cout << "Produit :" << endl;
	for (auto it = conteneur_.begin(); it != conteneur_.end(); it++)
	{
		(*it).second->afficher();
	}
}

double GestionnaireProduits::obtenirTotalAPayer() {
	double totalAPayer = 0;
	for (auto it = conteneur_.begin(); it != conteneur_.end(); it++)
		totalAPayer += (*it).second->obtenirPrix();

	return totalAPayer;
}
double GestionnaireProduits::obtenirTotalApayerPremium() {
	double totalAPayer = 0;
	for (auto it = conteneur_.begin(); it != conteneur_.end(); it++) {
		double prix = (*it).second->obtenirPrix();
		totalAPayer += prix < 5 ? 0 : prix - 5;
	}		

	return totalAPayer;
}

Produit* GestionnaireProduits::trouverProduitPlusCher() const {

	auto it =max_element(conteneur_.begin(), conteneur_.end(), [](const pair<int,Produit*>&n, const pair<int,Produit*>&x) {return (n.second->obtenirPrix() < x.second->obtenirPrix()); });
	return (*it).second;
}

vector<pair<int,Produit*>> GestionnaireProduits::obtenirProduitsEntre(double borneInf,double borneSup) {
	vector<pair<int, Produit*>> prixBorneVec;
	FoncteurIntervalle intervalle(borneInf, borneSup);
	copy_if(conteneur_.begin(), conteneur_.end(), back_inserter(prixBorneVec), intervalle);
		return prixBorneVec;
}

Produit* GestionnaireProduits::obtenirProduitSuivant(Produit* product) const {

	namespace p = std::placeholders; 
	auto it = find_if(conteneur_.begin(), conteneur_.end(), bind([](const pair<int, Produit*>& pair, Produit* prod) 
	{return pair.second->obtenirReference() > prod->obtenirReference(); }, p::_1, product));
	return it->second;
}
