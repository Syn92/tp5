/********************************************
* Titre: Travail pratique #5 - GestionnaireUsagers.cpp
* Date: 9 mars 2018
* Auteur: Ryan Hardie
*******************************************/

#include "GestionnaireUsagers.h"
#include <iostream>


double GestionnaireUsagers::obtenirChiffreAffaires() const {
	double chiffreAffaire = 0;
	///for (auto it = conteneur_.begin();it!=conteneur_.end(); it++)
	//{
	//	chiffreAffaire += (*it)->obtenirTotalAPayer();
	//}

	for (auto it = conteneur_.begin(); it != conteneur_.end(); it++)
		chiffreAffaire += (*it)->obtenirTotalAPayer();

	return chiffreAffaire;
}
void GestionnaireUsagers::encherir(Client *client, ProduitAuxEncheres *produit, double montant) const {
	if (montant>produit->obtenirPrix())
	{
		produit->mettreAJourEnchere(client, montant);
	}
}

void GestionnaireUsagers::reinitialiser() {
	for (auto it = conteneur_.begin(); it != conteneur_.end(); it++)
		(*it)->reinitialiser();

}

void GestionnaireUsagers::afficherProfils() const {
	
	cout << "PROFILS :" << endl;
	for (auto it = conteneur_.begin(); it != conteneur_.end(); it++)
	{
		(*it)->afficher();
	}
	
}