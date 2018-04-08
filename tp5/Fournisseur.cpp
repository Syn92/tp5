#include "Fournisseur.h"
#include <iostream>

Fournisseur::Fournisseur()
    : Usager()
{
}

Fournisseur::Fournisseur(const string &nom, const string &prenom, int identifiant,
                         const string &codePostal)
    : Usager(nom, prenom, identifiant, codePostal)
{
	// TODO : � modifier
}

GestionnaireProduits* Fournisseur::obtenirCatalogue() const
{
    return catalogue_;
}

void Fournisseur::afficherCatalogue() const
{
	// TODO : � modifier
    cout << "CATALOGUE (de " << obtenirNom() << ")"
         << "\n";
        catalogue_->afficher();
    cout << endl;
}

void Fournisseur::afficher() const
{
	// TODO : � modifier
    Usager::afficher();
    cout << "\t\tcatalogue:\t" << catalogue_->obtenirConteneur().size() << " elements" << endl;
}

void Fournisseur::reinitialiser()
{

	catalogue_->reinitialiserFournisseur();
	catalogue_->reinitialiserClient();
	/*/ TODO : � modifier
    for (unsigned int i = 0; i < catalogue_.size(); i++)
        catalogue_[i]->modifierFournisseur(nullptr);
    catalogue_.clear();*/
}

void Fournisseur::ajouterProduit(Produit *produit)
{
	// TODO : � modifier
	//for (unsigned int i = 0; i < catalogue_->obtenirConteneur().size(); i++)
	//  if (catalogue_[i] == produit)
	//      return;
	Fournisseur *fournisseur = produit->obtenirFournisseur();
	if (fournisseur != nullptr && fournisseur != this)
	 fournisseur->enleverProduit(produit);
	catalogue_->ajouter(produit);
}

void Fournisseur::enleverProduit(Produit *produit)
{
	// TODO : � modifier
	//produit->modifierFournisseur(nullptr);
	//for (unsigned int i = 0; i < catalogue_.size(); i++)
	//{
	////  if (catalogue_[i] == produit)
	//{
	//      catalogue_[i] = catalogue_[catalogue_.size() - 1];
	//      catalogue_.pop_back();
	//      return;
	//  }
	//}

	catalogue_->supprimer(produit);
}
