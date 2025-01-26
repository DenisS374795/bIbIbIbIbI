//---------------------------------------------------------------------------

#ifndef OSCMainH
#define OSCMainH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TOscillatorMain : public TForm
{
__published:	// IDE-managed Components
	TPaintBox *osc_pb;
	TLabel *Label1;
	TEdit *t_fl;
	TTimer *Timer1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TEdit *a_fl;
	TEdit *b_fl;
	TEdit *c_fl;
	TRadioButton *none_ra;
	TRadioButton *sin_ra;
	TRadioButton *mea_ra;
	TRadioButton *lin_ra;
	void __fastcall OscDraw(TObject *Sender);
	void __fastcall OscTimer(TObject *Sender);
	void __fastcall OscValueSet(TObject *Sender);
	void __fastcall OScKeyPres(TObject *Sender, System::WideChar &Key);
private:	// User declarations
public:		// User declarations
	__fastcall TOscillatorMain(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TOscillatorMain *OscillatorMain;
//---------------------------------------------------------------------------
#endif
