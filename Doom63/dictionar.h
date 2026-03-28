#ifndef dictionarH
#define dictionarH

#include <vector>
#include <string>
#include <iostream>
#include "cuvant.h"

using namespace std;

class Dictionar
{
private:
	vector<Cuvant> cuvinte;


public:

	//constructor
	Dictionar();

	//inserare in dictionar
	void adaugaCuvant(const Cuvant& c);

	//cautare in dictionar
	Cuvant* cautaCuvant(const string& textCautat);
	string cautaSin(const string& sinCautat);
	string cautaAnt(const string& antCautat);




};

#endif
