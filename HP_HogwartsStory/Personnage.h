#pragma once
#include <string>

using namespace std;

class Personnage
{
public:
	Personnage(string p, string n, string t);
	~Personnage();

	string GetName();
	string GetType();
	string GetLastname();
	string GetFirstname();

private:
	string firstname;
	string lastname;
	string name;
	string type;
};

