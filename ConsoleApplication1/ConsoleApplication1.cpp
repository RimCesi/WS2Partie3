#pragma once
#include "Etudiant.h" 
#include "promo.h" 

#include <iostream>

int main()
{
	promo CPIA2;

	int choix;
	do {
		cout << "tapez 1 pour inserer les infos des eleves, 2 de les charger a partir du fichier, 0 pour quitter" << endl;
		
		cin >> choix;
		
		if (choix == 0)
			exit;
		
		if (choix == 1)
		{
			CPIA2.InputNotesUtilisateur();
			CPIA2.InputNotesAUFichier("CPIA2.txt");
		}
		
		if (choix == 2)
		{
			CPIA2.OutputNotesDUFichier("CPIA2.txt");
		}
		
		CPIA2.afficherEtudiants();

	} while (choix != 0);

	return 0;
}
