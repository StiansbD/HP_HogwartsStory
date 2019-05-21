#include "pch.h"
#include "Etudiant.h"


Etudiant::Etudiant(string n, string p, string t, string h) : Sorcier(n, p, t)
{
	house = h;
}

string Etudiant::GetHouse()
{
	return house;
}

string Etudiant::Learn(string s)
{
	return "learn " + s;
}

Etudiant::~Etudiant()
{
}
