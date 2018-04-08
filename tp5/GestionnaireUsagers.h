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
using namespace std;


class GestionnaireUsagers : public GestionnaireGenerique <Usager, set<Usager*> , ajouterUsager , FoncteurSupprimerUsager>
{
public:
	double obtenirChiffreAffaires() const;
	void encherir(Client *client, ProduitAuxEncheres *produit, double montant) const;
	virtual void reinitialiser();
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