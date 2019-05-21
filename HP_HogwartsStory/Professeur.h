#pragma once
#include "Sorcier.h"

class Professeur :
	public Sorcier
{
public:
	Professeur(string n, string p, string t, string c);
	string Teach();
	~Professeur();

private:
	string cours;
};

