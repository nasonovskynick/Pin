#ifndef Unit2H
#define Unit2H
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.Dialogs.hpp>

class TForm2 : public TForm
{
__published:
	TButton *Button1;
	TEdit *Edit1;
	TEdit *Edit2;
	TEdit *Edit3;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TEdit *Edit4;
	TLabel *Label4;
	TEdit *Edit5;
	TLabel *Label5;
	TEdit *Edit6;
	TLabel *Label6;
	TEdit *Edit7;
	TLabel *Label7;
	TButton *Button2;
	TEdit *Edit8;
	TLabel *Label8;
	TButton *Button3;
	TMemo *Memo1;
	TButton *Button4;
	TSaveDialog *SaveDialog1;
	TImage *Image1;
	TImage *Image2;
	TImage *Image3;
	TImage *Image4;
	TLabel *lab_l;
	TLabel *lab_f;
	TLabel *lab_a;
	TLabel *lab_b;
	TLabel *lab_n;
	TLabel *lab_t;
	TButton *Button5;
	TOpenDialog *OpenDialog1;
	TLabel *lab_form;
	TEdit *Edit9;
	TLabel *Label9;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall Button5Click(TObject *Sender);
private:
public:
	__fastcall TForm2(TComponent* Owner);
};

extern PACKAGE TForm2 *Form2;

#endif
