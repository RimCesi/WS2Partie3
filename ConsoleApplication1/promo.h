#pragma once
#include "Etudiant.h"

class promo
{
private:
	Etudiant* listEtudiants;
	int nb_etudiants;
public:
	promo();
	int getNbEtudiants();
	void InputNotesUtilisateur();
	void afficherEtudiants();
	void InputNotesAUFichier(string t_fileName);
	void OutputNotesDUFichier(string t_fileName);
};
