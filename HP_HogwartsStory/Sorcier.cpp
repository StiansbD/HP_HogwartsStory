#include "pch.h"
#include "Sorcier.h"


Sorcier::Sorcier(string p, string n, string t):Personnage(p, n, t)
{
}

string Sorcier::CastSpell(string s)
{
	if (What(s) == SPELL)
	{
		return GetName() + " a lancer le sort " + s;
	}
	else
	{
		return "Ce n'est pas un sort connu...";
	}
}

string Sorcier::ThrowPotion(string p)
{
	return GetName() + " a lancer la potion " + p;
}

void Sorcier::LearnSpell(string s)
{
	spell[id_spell] = s;
	id_spell++;
}

void Sorcier::LearnPotion(string p)
{
	potion[id_potion] = p;
	id_potion++;
}

int Sorcier::What(string t)
{
	int i;
	for (i = 0; i < MAX_LEARNABLE; i++)
	{
		if (t == spell[i])
		{
			return SPELL;
		}
		else if (t == potion[i])
		{
			return POTION;
		}
	}
	return 0;
}

Sorcier::~Sorcier()
{
}
