#include "Etudiant.h"

Etudiant::Etudiant() {};

Etudiant::Etudiant(string t_nom, int t_moyenne) {};

Etudiant::Etudiant(const Etudiant& t_etudiant) {
	nom = t_etudiant.nom; moyenne = t_etudiant.moyenne; 
};

string Etudiant::getNom() { 
	return nom; 
};

int Etudiant::getMoyenne() {
	return moyenne; 
};

void Etudiant::setNom(string t_Nom) {
	nom = t_Nom; 
};

void Etudiant::setMoyenne(int t_Moyenne) {
	moyenne = t_Moyenne; 
};
