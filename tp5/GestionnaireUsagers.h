/********************************************
* Titre: Travail pratique #5 - GestionnaireUsagers.h
* Date: 9 mars 2018
* Auteur: Ryan Hardie
*******************************************/

#ifndef GESTIONNAIREUSAGERS_H
#define GESTIONNAIREUSAGERS_H

#include "GestionnaireGenerique.h"
#include "ProduitAuxEncheres.h"
#include "Foncteur.h"
#include "Usager.h"
#include "Client.h"
#include <set>


class GestionnaireUsagers : public GestionnaireGenerique<set<Usager*>, Usager , ajouterUsager , FoncteurSupprimerUsager>
{
	public:
		double obtenirChiffreAffaires() const;
		void reinitialiser();
		void afficherProfils() const;
		void encherir(Client* client, ProduitAuxEncheres* produit, double montant) const;

	
};
#endif