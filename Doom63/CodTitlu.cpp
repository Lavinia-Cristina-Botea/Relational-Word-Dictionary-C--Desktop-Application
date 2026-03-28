//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "CodTitlu.h"
#include "CodDex.h"
#include "cuvant.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Ttitlu *titlu;
//---------------------------------------------------------------------------
__fastcall Ttitlu::Ttitlu(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Ttitlu::IesireClick(TObject *Sender)
{
    exit(0);
}
//---------------------------------------------------------------------------






void __fastcall Ttitlu::IntraClick(TObject *Sender)
{
	this->Hide();
    Dex->Show();
}
//---------------------------------------------------------------------------







