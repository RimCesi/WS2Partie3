#pragma once
#include <iostream>
#include <fstream>
using namespace std;
class Etudiant
{
private:
    string nom;
    int moyenne;
public:
    Etudiant();
    Etudiant(string t_nom, int t_moyenne);
    Etudiant(const Etudiant& t_etudiant);
    string getNom();
    int getMoyenne();
    void setNom(string t_Nom);
    void setMoyenne(int t_Moyenne);
};

