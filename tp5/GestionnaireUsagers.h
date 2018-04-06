/********************************************
* Titre: Travail pratique #5 - GestionnaireUsagers.h
* Date: 9 mars 2018
* Auteur: Ryan Hardie
*******************************************/
#ifndef GESTIONNAIREUSAGERS_H
#define GESTIONNAIREUSAGERS_H



#pragma once
#include "GestionnaireGenerique.h"


class GestionnaireUsager : GestionnaireGenerique<Usager,set<Usager*>,ajouterUsager,FoncteurSupprimerUsager>
{
public:
	double obtenirChiffreAffaires() const;
	void encherir(Client *client, ProduitAuxEncheres *produit, double montant) const;
	void reinitialiser();
	void afficherProfils() const;
private:
	
};


// TODO : Cr�er la classe GestionnaireUsager

// TODO : La classe ressemble beaucoup � la classe Gestionnaire
/*
Les m�thodes retrouv�es de la classe Gestionnaire sont :
- double obtenirChiffreAffaires() const;
- void encherir(Client *client, ProduitAuxEncheres *produit, double montant) const;
- void reinitialiser();
- void afficherProfils() const;
*/
#endif // !GESTIONNAIREUSAGERS_H