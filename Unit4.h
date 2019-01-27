#ifndef Unit4H
#define Unit4H
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
class TForm4 : public TForm
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
	__fastcall TForm4(TComponent* Owner);
};

extern PACKAGE TForm4 *Form4;

#endif
