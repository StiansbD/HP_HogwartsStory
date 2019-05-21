#include "pch.h"
#include "Personnage.h"


Personnage::Personnage(string p, string n, string t)
{
	firstname = p;
	lastname = n;
	type = t;
	name = firstname + " " + lastname;
}

string Personnage::GetName()
{
	return name;
}

string Personnage::GetType()
{
	return type;
}

string Personnage::GetLastname()
{
	return lastname;
}

string Personnage::GetFirstname()
{
	return firstname;
}

Personnage::~Personnage()
{
}
