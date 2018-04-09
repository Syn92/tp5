/********************************************
* Titre: Travail pratique #5 - GestionnaireGenerique.h
* Date: 9 mars 2018
* Auteur: Ryan Hardie
*******************************************/
#ifndef GESTIONNAIREGENERIQUE_H
#define GESTIONNAIREGENERIQUE_H


#include <algorithm>
#include "Foncteur.h"

using namespace std;

template<typename C,typename T,typename A,typename S>
class GestionnaireGenerique {
public:

	C obtenirConteneur() const {
		return conteneur_;
	}
	void ajouter(T* t) {
		A ajouter(conteneur_);
		ajouter(t);
	}
	void supprimer( T* t) {
		S supprimer(conteneur_);
		supprimer(t);
		
	}
	template<typename Predicate>
	void pourChaqueElement(Predicate x) {
		for_each(conteneur_.begin(), conteneur_.end(), x);

	}
protected:
	C conteneur_;

};

// TODO : Créer la classe GestionnaireGenerique

// TODO : Méthodes :
/*
- ajouter()
- supprime()
- obtenirConteneur()
- pourChaqueElement()
*/

#endif