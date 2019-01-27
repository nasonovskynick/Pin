#ifndef Unit3H
#define Unit3H
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>

class TForm3 : public TForm
{
__published:
	TLabel *Label1;
	TComboBox *ComboBox1;
	TButton *Button1;
	TButton *Button2;
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
private:
public:
	__fastcall TForm3(TComponent* Owner);
};

extern PACKAGE TForm3 *Form3;

#endif
