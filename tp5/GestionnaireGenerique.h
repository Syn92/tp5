/********************************************
* Titre: Travail pratique #5 - GestionnaireGenerique.h
* Date: 9 mars 2018
* Auteur: Ryan Hardie
*******************************************/
#ifndef GESTIONNAIREGENERIQUE_H
#define GESTIONNAIREGENERIQUE_H


#pragma once
#include <algorithm>

using namespace std;

template<typename T,typename C,class A,class S>
class GestionnaireGenerique {
public:

	C obtenirConteneur() const {
		return conteneur_;
	}
	void ajouter(const T* t) {
		A ajouter(conteneur_);
		//ajouter(t);
	}
	void supprimer(const T* t) {
		S supprimer(conteneur_);
		//supprimer(t);
		
	}
	template<typename Predicate>
	void pourChaqueElement() {
		for_each(conteneur_.begin(), conteneur_.end(), PREDICATE);

	}
protected:
	C &conteneur_;

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