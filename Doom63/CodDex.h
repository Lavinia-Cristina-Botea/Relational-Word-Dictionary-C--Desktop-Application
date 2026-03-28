//---------------------------------------------------------------------------

#ifndef CodDexH
#define CodDexH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "dictionar.h"
//---------------------------------------------------------------------------






class TDex : public TForm
{
__published:	// IDE-managed Components
	TStaticText *Bunvenit;
	TRadioButton *Sinonim;
	TRadioButton *Antonim;
	TStaticText *Cuvantdorit;
	TButton *Inapoititlu;
	TEdit *Cuvantales;
	TButton *Iesiredex;
	TButton *Cauta;
	TMemo *Rezultat;
	TButton *sinonimAles;
	TButton *Antonimales;
	void __fastcall IesiredexClick(TObject *Sender);
	void __fastcall InapoititluClick(TObject *Sender);
	void __fastcall CautaClick(TObject *Sender);
	void __fastcall SinonimalesClick(TObject *Sender);
	void __fastcall AntonimalesClick(TObject *Sender);

private:	// User declarations
	Dictionar *dictionarulMeu;

public:		// User declarations
	__fastcall TDex(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TDex *Dex;
//---------------------------------------------------------------------------
#endif
