/********************************************
* Titre: Travail pratique #5 - GestionnaireUsagers.h
* Date: 9 mars 2018
* Auteur: Ryan Hardie
*******************************************/

#pragma once

#include "GestionnaireGenerique.h"

class GestionnaireUsager : GestionnaireGenerique<Usager,set<Usager*>,ajouterUsager,FoncteurSupprimerUsager>
{
public:
	MyClass();
	~MyClass();

private:

};

MyClass::MyClass()
{
}

MyClass::~MyClass()
{
}
// TODO : Cr�er la classe GestionnaireUsager

// TODO : La classe ressemble beaucoup � la classe Gestionnaire
/*
Les m�thodes retrouv�es de la classe Gestionnaire sont :
- double obtenirChiffreAffaires() const;
- void encherir(Client *client, ProduitAuxEncheres *produit, double montant) const;
- void reinitialiser();
- void afficherProfils() const;
*/