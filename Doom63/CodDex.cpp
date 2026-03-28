//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "CodTitlu.h"
#include "CodDex.h"
#include "cuvant.h"
#include "dictionar.h"
#include <sstream>
#pragma package(smart_init)
#pragma resource "*.dfm"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TDex *Dex;






__fastcall TDex::TDex(TComponent* Owner)
	: TForm(Owner)
{

dictionarulMeu = new Dictionar();
	Cuvant c1("frumos");
	c1.setDefinitie("Ceva plăcut la privire.");
	c1.adaugaSinonim("arătos");
	c1.adaugaSinonim("superb");
	c1.adaugaAntonim("urât");
	c1.adaugaAntonim("neplăcut");

	Cuvant c2("rapid");
	c2.setDefinitie("Ceva care se mișcă iute.");
	c2.adaugaSinonim("iute");
	c2.adaugaSinonim("veloce");
	c2.adaugaAntonim("lent");


	Cuvant c3("mare");
	c3.setDefinitie("Ceva de dimensiuni extinse");
	c3.adaugaSinonim("imens");
	c3.adaugaAntonim("mic");


    Cuvant c4("inteligent");
	c4.setDefinitie("Cineva înzestrat cu capacitatea de a înțelege ușor și bine.");
	c4.adaugaSinonim("deștept");
	c4.adaugaSinonim("ager");
	c4.adaugaSinonim("întelept");
	c4.adaugaAntonim("prost");
	c4.adaugaAntonim("nerod");


	Cuvant c5("trist");
	c5.setDefinitie("Cineva cuprins de mâhnire sau de supărare.");
	c5.adaugaSinonim("mâhnit");
	c5.adaugaSinonim("amărât");
	c5.adaugaSinonim("abătut");
	c5.adaugaAntonim("vesel");
	c5.adaugaAntonim("fericit");
	c5.adaugaAntonim("bucuros");

	Cuvant c6("curajos");
	c6.setDefinitie("Cineva care înfruntă ceva/pe cineva fără frica primejdiilor.");
    c6.adaugaSinonim("viteaz");
	c6.adaugaSinonim("îndrăzneț");
	c6.adaugaSinonim("brav");
	c6.adaugaAntonim("fricos");
	c6.adaugaAntonim("laș");
	c6.adaugaAntonim("timid");



    Cuvant c7("prieten");
    c7.setDefinitie("Persoana care cuiva îi este legat prin afecțiune.");
    c7.adaugaSinonim("amic");
	c7.adaugaSinonim("tovăraș");
	c7.adaugaSinonim("camarad");
	c7.adaugaAntonim("dușman");
	c7.adaugaAntonim("inamic");
	c7.adaugaAntonim("adversar");


	Cuvant c8("început");
	c8.setDefinitie("Punctul de plecare al unei acțiuni.");
	c8.adaugaSinonim("debut");
    c8.adaugaSinonim("start");
    c8.adaugaSinonim("origine");
	c8.adaugaAntonim("sfarșit");
	c8.adaugaAntonim("final");
	c8.adaugaAntonim("încheiere");


    Cuvant c9("aproape");
    c9.setDefinitie("La mică distanță în spațiu sau în timp.");
	c9.adaugaSinonim("lângă");
	c9.adaugaSinonim("vecin");
	c9.adaugaAntonim("departe");
	c9.adaugaAntonim("distant");


    Cuvant c10("complex");
	c10.setDefinitie("Ceva care este alcătuit din mai multe elemente.");
	c10.adaugaSinonim("complicat");
	c10.adaugaSinonim("dificil");
	c10.adaugaSinonim("întortocheat");
	c10.adaugaAntonim("simplu");
	c10.adaugaAntonim("clar");


	Cuvant c11("locuință");
	c11.setDefinitie("Locul unde locuiești");

	Cuvant c12("curent");
	c12.setDefinitie("Transportul electronilor printr-un conductor");

	dictionarulMeu->adaugaCuvant(c1);
	dictionarulMeu->adaugaCuvant(c2);
	dictionarulMeu->adaugaCuvant(c3);
	dictionarulMeu->adaugaCuvant(c4);
	dictionarulMeu->adaugaCuvant(c5);
	dictionarulMeu->adaugaCuvant(c6);
	dictionarulMeu->adaugaCuvant(c7);
	dictionarulMeu->adaugaCuvant(c8);
	dictionarulMeu->adaugaCuvant(c9);
	dictionarulMeu->adaugaCuvant(c10);

	dictionarulMeu->adaugaCuvant(c11);
    dictionarulMeu->adaugaCuvant(c12);
}
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
void __fastcall TDex::IesiredexClick(TObject *Sender)
{
    exit(0);
}
//---------------------------------------------------------------------------
void __fastcall TDex::InapoititluClick(TObject *Sender)
{
	this->Hide();
	titlu->Show();
}
//---------------------------------------------------------------------------


void __fastcall TDex::CautaClick(TObject *Sender)
{
//curatare
Rezultat->Lines->Clear();

	//input gol
	String textRaw = Cuvantales->Text.Trim();


	if (textRaw.IsEmpty()) {
		ShowMessage(L"Scrie un cuvânt mai întâi!");
		return;
	}

	//cautare cuv din input
	string textDeCautat = AnsiString(textRaw).c_str();
	Cuvant* rezultat = dictionarulMeu->cautaCuvant(textDeCautat);



	//cuvant negasit
	if (rezultat == nullptr) {
		Rezultat->Lines->Add(L"Cuvântul '" + textRaw + L"' nu a fost găsit în dicționar!");
		return;
	}


	//afisare
	Rezultat->Lines->Add("CUVÂNT: " + textRaw.UpperCase());
	Rezultat->Lines->Add("--------------------------------");
	Rezultat->Lines->Add(L"DEFINIȚIE: " + String(rezultat->getDefinitie().c_str()));
	Rezultat->Lines->Add("");


	//afisare sinonime/antonime
	if (Sinonim->Checked) {
		Rezultat->Lines->Add("--- SINONIME ---");
		vector<string> sin = rezultat->getSinonime();

		if (sin.empty()) {
			Rezultat->Lines->Add(L"(Nu există sinonime înregistrate)");
		} else {
			for (int i = 0; i < sin.size(); i++) {
				Rezultat->Lines->Add(L"-> " + AnsiString(sin[i].c_str()));
			}
		}
	}

	else if (Antonim->Checked) {
		Rezultat->Lines->Add("--- ANTONIME ---");
		vector<string> ant = rezultat->getAntonime();

		if (ant.empty()) {
			Rezultat->Lines->Add(L"(Nu există sinonime înregistrate)");
		} else {
			for (int i = 0; i < ant.size(); i++) {
				Rezultat->Lines->Add("-> " + AnsiString(ant[i].c_str()));
			}
		}
	}

	//buton radio neselectat
	else {

		ShowMessage(L"Te rog bifează dacă vrei Sinonim sau Antonim!");
		Rezultat->Lines->Add(L"Selectează o opțiune din dreapta (Sinonim/Antonim).");
	}}





void __fastcall TDex::SinonimalesClick(TObject *Sender)
{
//curatare
Rezultat->Lines->Clear();

 //input gol
	String textRaw = Cuvantales->Text.Trim();
	if (textRaw.IsEmpty()) {
		ShowMessage(L"Scrie un cuvânt mai întâi!");
		return;
	}



			string sinDeCautat = AnsiString(textRaw).c_str();
			string sinGasit = dictionarulMeu->cautaSin(sinDeCautat);


			//sinonim negasit
			if (sinGasit == "eroare") {
				Rezultat->Lines->Add(L"Sinonimul '" + textRaw + L"' nu a fost găsit în dicționar!");
				return;
			}
			else{
				Rezultat->Lines->Add(L"SINONIM: " + String(sinGasit.c_str()));
				return;
			}




}



void __fastcall TDex::AntonimalesClick(TObject *Sender)
{
Rezultat->Lines->Clear();

//input gol
	String textRaw = Cuvantales->Text.Trim();
	if (textRaw.IsEmpty()) {
		ShowMessage(L"Scrie un cuvânt mai întâi!");
		return;
	}

	string antonimcautat =  AnsiString(textRaw).c_str();
	string antonimGasit =    dictionarulMeu->cautaAnt(antonimcautat);

	if(antonimGasit == "eroare")
	{
			Rezultat->Lines->Add(L"Antonimul '" + textRaw + L"' nu a fost găsit în dicționar!");
				return;

	}
	else
		Rezultat->Lines->Add(L"ANTONIM: " + String(antonimGasit.c_str()));
		return;

}
//---------------------------------------------------------------------------


