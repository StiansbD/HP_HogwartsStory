#pragma once
#include "Personnage.h"

class Professeur :
	public Personnage
{
public:
	Professeur(string n, string p, string t, string c);
	string Teach();
	~Professeur();

private:
	string cours;
};

