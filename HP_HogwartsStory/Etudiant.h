#pragma once
#include "Sorcier.h"

class Etudiant :
	public Sorcier
{
public:
	Etudiant(string n, string p, string t, string h);
	string GetHouse();
	string Learn(string s);
	~Etudiant();

private:
	string house;
};

