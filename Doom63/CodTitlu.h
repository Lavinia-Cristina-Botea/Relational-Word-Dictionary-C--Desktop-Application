//---------------------------------------------------------------------------

#ifndef CodTitluH
#define CodTitluH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>

using namespace std;
//---------------------------------------------------------------------------




class Ttitlu : public TForm
{
__published:	// IDE-managed Components
	TButton *Iesire;
	TButton *Intra;
	TImage *z;
	TStaticText *Titlu;
	void __fastcall IesireClick(TObject *Sender);
	void __fastcall IntraClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall Ttitlu(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Ttitlu *titlu;
//---------------------------------------------------------------------------
#endif
