/********************************************
* Titre: Travail pratique #5 - Foncteur.h
* Date: 9 mars 2018
* Auteur: Ryan Hardie
*******************************************/

#pragma once
#include <iostream>
#include <set>
#include <vector>
#include <map>
#include <algorithm>

// TODO : Créer le FoncteurEgal
template<typename T>
class FoncteurEgal
{
public:
	FoncteurEgal(T* t) { t_ = t; }
	bool operator()(pair<int, T*>pair) { return pair.second() == t_; } //compare le parametre de type T de la paire, avec l'attribut

private:
	T* t_;
};


// TODO : Créer le FoncteurGenerateurId
/*
Attributs :
- id_;
Méthodes :
- operator(); Incrémenter id_ à chaque appel
*/
class FoncteurGenerateurId
{
public:
	FoncteurGenerateurId() :id_(0) {}
	void operator()() { id_++; } // incremente l'ID

private:
	int id_;
};


// TODO : Créer le FoncteurDiminuerPourcent
/*
Attributs :
- pourcentage_;
Méthodes :
- operator(); Calule le nouveau prix du Produit de la pair passé en paramètre et le modifie
*/
class FoncteurDiminuerPourcent
{
public:
	FoncteurDiminuerPourcent(int pourcentage) {
		pourcentage_ = pourcentage;
	}
	void operator()(pair<int, Produit*>& x) {
		double prix = x.second->Produit::obtenirPrix();
		double prixReduit = prix - pourcentage_*0.01*prix;
		x.second->Produit::modifierPrix(prixReduit);
	}

private:
	int pourcentage_;
};

// TODO : Créer le FoncteurIntervalle
/*
Attributs :
- borneInf_;
- borneSup_;
Méthodes :
- operator(); Vérifie que le Produit associé à la pair passé en paramètre est compris entre les bornes borneInf_ et borneSup_ (retourne un booléen)
*/
class FoncteurIntervalle
{
public:
	FoncteurIntervalle(double borneinf, double bornesup) { borneInf_ = borneinf; borneSup_ = bornesup; }
	bool operator()(pair<int, Produit* >& x) { return (x.second->obtenirPrix() <= borneSup_ && x.second->obtenirPrix() >= borneInf_); }//prix <=borne sup et >= borneinf

private:
	double borneInf_;
	double borneSup_;
};


// TODO : Créer le Foncteur AjouterProduit
/*
Attributs :
- &multimap_;
Méthodes :
- operator(); Ajoute dans la multimap la pair passé par paramètre et retourne la multimap_;
*/
class AjouterProduit
{
public:
	AjouterProduit(multimap<int, Produit*>&multimap) { multimap_ = multimap; }
	multimap<int, Produit*> operator()(pair<int, Produit*>pair) { multimap_.insert(pair); }

private:
	multimap<int, Produit*> multimap_;
};


// TODO : Créer le Foncteur SupprimerProduit
/*
Attributs :
- &multimap_;
Méthodes :
- operator(); Utilise la fonction find_if avec le FoncteurEgal. Si le Produit existe,
				on supprime le Produit et on retourne la multimap_,
				sinon on retourne juste la multimap_ sans supprimer l'élément.
*/
class SupprimerProduit
{
public:
	SupprimerProduit(multimap<int, Produit*>&multimap) { multimap_ = multimap; } // constructeur par parametre
	multimap<int, Produit*> operator()(pair<int,Produit*>pair) { // surcharge operateur ()
		Produit* temp = pair.second; // création d'un produit* pour faciliter la lecture
		FoncteurEgal<Produit> egal(temp);// construction du foncteurEgal avec le produit de la pair
		auto it = find_if(multimap_.begin(), multimap_.end(), egal(pair));// find_if avec le prédicat prenant en parametre la pair.
		if (it!=multimap_.end())
		{
			multimap_.erase(it);
		}
		return multimap_;
	}

private:
	multimap<int, Produit*>multimap_;// &multimap -> par référence mais bug (pas d'initalisateur) ??
};


//TODO : Créer le Foncteur AjouterUsager
/*
Attributs :
- &set;
Méthodes :
- operateur(); Trouve l'Usager dans le set_, s'il existe on le supprime et on retourne le set_, sinon on retourne juste directement le set_.??
*/
class ajouterUsager
{
public:
	
	set<Usager*> operator()(Usager* &usager) { 
	set_.insert(usager); // ajoute l'usager* dans le set, et le retourne
	return set_;
	}
	

private:
	set<Usager*>&set_;
};