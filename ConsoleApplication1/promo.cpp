#include "promo.h"
#include "promo.h"
#include <iostream>
#include <fstream>

promo::promo() {
	nb_etudiants = 0;
};


int promo::getNbEtudiants() {
	return nb_etudiants; 
};

void promo::InputNotesUtilisateur() {
	cout << "Entrez le nombre d'Etudinants" << endl;
	int n;
	cin >> n;
	listEtudiants = new Etudiant[n];
	nb_etudiants = n;
	
	string tnom;
	int tmoyenne;
	for (int i = 0; i < n; i++)
	{
		cout << "Nom de l'etudiant numero " << i + 1 << endl;
		cin >> tnom;
		listEtudiants[i].setNom(tnom);
		cout << "Moyenne de l'etudiant numero " << i + 1 << endl;
		cin >> tmoyenne;
		listEtudiants[i].setMoyenne(tmoyenne);
	}
	cout << n << " Etudiants info sont ajoutees avec succes" << endl;
};

void promo::afficherEtudiants() {
	for (int i = 0; i < nb_etudiants; i++)
	{
		cout << "Etudiant " << i + 1 << " - Nom : " << listEtudiants[i].getNom() << " - Moyenne : " << listEtudiants[i].getMoyenne() << endl;
	}
};

void promo::InputNotesAUFichier(string t_fileName) {

	ofstream file_obj;
	file_obj.open(t_fileName, ios::app);
	for (int i = 0; i < nb_etudiants; i++)
	{
		file_obj.write((char*)&listEtudiants[i], sizeof(listEtudiants[i]));
	}
	cout << "la liste des infos sont ajoutees au fichier " << t_fileName << " avec succes" << endl;
};


void promo::OutputNotesDUFichier(string t_fileName) {
	cout << "Entrez le nombre d'Etudinants" << endl;
	cin >> nb_etudiants;
	listEtudiants = new Etudiant[nb_etudiants];
	ifstream file_obj;
	file_obj.open(t_fileName, ios::app);
	int i = 0;
	do {
		file_obj.read((char*)&listEtudiants[i], sizeof(listEtudiants[i]));

		if (++i > nb_etudiants)
			break;
	} while (!file_obj.eof());

	cout << "la liste des infos sont lu avec succes a partir du fichier " << t_fileName << endl;
};
