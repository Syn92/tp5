#ifndef CLIENT_H
#define CLIENT_H

#include <string>
#include "Usager.h"
#include "GestionnaireProduits.h"
#include "GestionnaireUsagers.h"
#include <vector>
#include "Produit.h"

using namespace std;

class GestionnaireProduits;

class Client : public Usager
{
  public:

    Client(int codeClient = 0);
    Client(const string &nom, const string &prenom, int identifiant, const string &codePostal,int codeClient = 0);
	virtual ~Client();


    int obtenirCodeClient() const;
	void modifierCodeClient(unsigned int codeClient);
	// TODO : Modifier ses méthodes : -------------------
	GestionnaireProduits* obtenirPanier() const;
    virtual double obtenirTotalAPayer() const;
    void afficherPanier() const;
    virtual void afficher() const;
    virtual void enleverProduit(Produit *produit);
    virtual void ajouterProduit(Produit *produit);
    virtual void reinitialiser();
	// --------------------------------------------------

	// TODO : Implémenter cette méthodes : 
	Produit* trouverProduitPlusCher() const;
  
  protected:
    GestionnaireProduits* panier_;

  private:
    unsigned int codeClient_;
};

#endif
