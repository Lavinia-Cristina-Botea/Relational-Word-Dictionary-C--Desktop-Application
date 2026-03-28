//---------------------------------------------------------------------------

#pragma hdrstop

#include "dictionar.h"



	Dictionar::Dictionar() {

	}


	void Dictionar::adaugaCuvant(const Cuvant& c) {
		cuvinte.push_back(c);
	}



	Cuvant* Dictionar::cautaCuvant(const string& textCautat) {
		for (int i = 0; i < cuvinte.size(); i++) {

			if (cuvinte[i].getText() == textCautat) {
				return &cuvinte[i];
			}
		}
		return nullptr;
	}


string Dictionar::cautaSin(const string& sinCautat) {
	for (int i = 0; i < cuvinte.size(); i++) {

		vector<string> aux = cuvinte[i].getSinonime();

		for (int j = 0; j < aux.size(); j++) {
			if (aux[j] == sinCautat) {
				return aux[j] + " (sinonim al lui " + cuvinte[i].getText() + ") ";
			}
		}
	}
	return "eroare";
}




    string Dictionar::cautaAnt(const string& antCautat) {
    for (int i = 0; i < cuvinte.size(); i++) {

        vector<string> aux = cuvinte[i].getAntonime();

        for (int j = 0; j < aux.size(); j++) {
            if (aux[j] == antCautat) {
                return aux[j] + " (antonim al lui " + cuvinte[i].getText() + ") ";
            }
        }
    }
    return "eroare";
}





//---------------------------------------------------------------------------
#pragma package(smart_init)
