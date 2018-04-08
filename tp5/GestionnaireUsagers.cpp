/********************************************
* Titre: Travail pratique #5 - GestionnaireUsagers.cpp
* Date: 9 mars 2018
* Auteur: Ryan Hardie
*******************************************/

#include "GestionnaireUsagers.h"


double GestionnaireUsager::obtenirChiffreAffaires() const {
	double chiffreAffaire = 0;
	///for (auto it = conteneur_.begin();it!=conteneur_.end(); it++)
	//{
	//	chiffreAffaire += (*it)->obtenirTotalAPayer();
	//}

	for (auto it : conteneur_)
		chiffreAffaire += it->obtenirTotalAPayer();

	return chiffreAffaire;
}
void GestionnaireUsager::encherir(Client *client, ProduitAuxEncheres *produit, double montant) const {
	if (montant>produit->obtenirPrix())
	{
		produit->mettreAJourEnchere(client, montant);
	}
}
void GestionnaireUsager::reinitialiser() {
	//for (auto it = conteneur_.begin(); it != conteneur_.end(); it++)
		//(*it)->reinitialiser();


	for (auto it : conteneur_)
		it->reinitialiser();
	
}

void GestionnaireUsager::afficherProfils() const {
	
	cout << "PROFILS :" << endl;
	//for (auto it = conteneur_.begin(); it != conteneur_.end(); it++)
	//{
	//	(*it)->afficher();
	//}
	
	//for (auto it : conteneur_)
	//	it->afficher();



}