//---------------------------------------------------------------------------

#pragma hdrstop

#include "cuvant.h"


Cuvant::Cuvant(string t) {
		text = t;
	}

	string Cuvant::getText()
	{
		return text;
	}

	string Cuvant::getDefinitie()
	{
		return definitie;
	}

	void Cuvant::setDefinitie(const string& def)
	{
		definitie = def;
	}


	void Cuvant::adaugaSinonim(const string& sin)
	{

		sinonime.push_back(sin);
	}

	void Cuvant::adaugaAntonim(const string& ant)
	{

		antonime.push_back(ant);
	}

	vector<string> Cuvant::getSinonime()
	{
		return sinonime;
	}

	vector<string> Cuvant::getAntonime()
	{
		return antonime;
	}


//---------------------------------------------------------------------------
#pragma package(smart_init)
