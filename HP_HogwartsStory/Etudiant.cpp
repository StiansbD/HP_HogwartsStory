#include "pch.h"
#include "Etudiant.h"


Etudiant::Etudiant(string n, string p, string t) : Personnage(n, p, t)
{
}

void Etudiant::DefineHouse(string h) 
{
	house = h;
}

string Etudiant::GetHouse()
{
	return house;
}

string Etudiant::Learn(string s)
{
	return GetFirstname() + " a appris le sort " + s;
}

Etudiant::~Etudiant()
{
}
