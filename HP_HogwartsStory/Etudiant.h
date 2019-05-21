#pragma once
#include "Personnage.h"

class Etudiant :
	public Personnage
{
public:
	Etudiant(string n, string p, string t);
	void DefineHouse(string h);
	string GetHouse();
	string Learn(string s);
	~Etudiant();

private:
	string house;
};

