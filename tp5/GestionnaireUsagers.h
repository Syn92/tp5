/********************************************
* Titre: Travail pratique #5 - GestionnaireUsagers.h
* Date: 9 mars 2018
* Auteur: Ryan Hardie
*******************************************/
#ifndef GESTIONNAIREUSAGERS_H
#define GESTIONNAIREUSAGERS_H



#pragma once
#include "GestionnaireGenerique.h"
#include "ProduitAuxEncheres.h"
#include <set>


//not able to detect GestionnaireGenerique 
class GestionnaireUsager : GestionnaireGenerique <Usager, set<Usager*> , ajouterUsager , FoncteurSupprimerUsager>
{
public:
	GestionnaireUsager(){};
	double obtenirChiffreAffaires() const;
	void encherir(Client *client, ProduitAuxEncheres *produit, double montant) const;
	void reinitialiser();
	void afficherProfils() const;

	
};


// TODO : Créer la classe GestionnaireUsager

// TODO : La classe ressemble beaucoup à la classe Gestionnaire
/*
Les méthodes retrouvées de la classe Gestionnaire sont :
- double obtenirChiffreAffaires() const;
- void encherir(Client *client, ProduitAuxEncheres *produit, double montant) const;
- void reinitialiser();
- void afficherProfils() const;
*/
#endif // !GESTIONNAIREUSAGERS_H