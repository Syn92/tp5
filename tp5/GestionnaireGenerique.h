/********************************************
* Titre: Travail pratique #5 - GestionnaireGenerique.h
* Date: 9 mars 2018
* Auteur: Ryan Hardie
*******************************************/
#ifndef GESTIONNAIREGENERIQUE_H
#define GESTIONNAIREGENERIQUE_H


#include <string>
#include <vector>
#include <iostream>
#include <set>

using namespace std;
#pragma once
template<typename T,typename C>
class GestionnaireGenerique {
public:
	C<T> obtenirConteneur() const {
		return conteneur_;
	};


protected:
	C<T>conteneur_;

private:
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