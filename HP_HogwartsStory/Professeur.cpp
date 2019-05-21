#include "pch.h"
#include "Professeur.h"


Professeur::Professeur(string n, string p, string t, string c) : Personnage(n, p, t)
{
	cours = c;
}

string Professeur::Teach()
{
	return "Professeur " + GetLastname() + " a donne le cours de " + cours + " a l'instant.\n";
}

Professeur::~Professeur()
{
}
