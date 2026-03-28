#ifndef cuvantH
#define cuvantH

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Cuvant
{
private:
	string text;
	string definitie;
	vector<string> sinonime;
	vector<string> antonime;

public:

	//constructor
	Cuvant(string t = "");

	//returnare date private
	string getText();
	string getDefinitie();
	vector<string> getSinonime();
	vector<string> getAntonime();

	//adaugare date
	void setDefinitie(const string& def);

	void adaugaSinonim(const string& sin);
	void adaugaAntonim(const string& ant);




};
#endif
