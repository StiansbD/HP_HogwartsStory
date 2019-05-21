#pragma once
#include "Personnage.h"

const int MAX_LEARNABLE = 50;

class Sorcier :
	public Personnage
{
public:
	Sorcier(string p, string n, string t);
	string CastSpell(string s);
	string ThrowPotion(string p);
	void LearnSpell(string s);
	void LearnPotion(string p);
	int What(string t);
	~Sorcier();

private:
	const int SPELL = 83;
	const int POTION = 80;

	int id_spell = 0;
	int id_potion = 0;
	string spell[MAX_LEARNABLE];
	string potion[MAX_LEARNABLE];
};

