#include <vcl.h>
#pragma hdrstop
#include "Unit3.h"
#include "Unit2.h"
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;

__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
}

void __fastcall TForm3::Button2Click(TObject *Sender)
{
 Form3->Hide();
}

void __fastcall TForm3::Button1Click(TObject *Sender)
{
 Form2->Button2->Caption="Материал: "+ComboBox1->Text;
 Form2->Button3->Caption="Выберите тип пина";
 Form2->Edit8->Text=ComboBox1->Text;
 Form2->Edit9->Text="";
 Form2->lab_form->Visible=false;
 Form2->Image1->Visible=true;
 Form2->Image2->Visible=false;
 Form2->Image3->Visible=false;
 Form2->Image4->Visible=false;
 Form3->Hide();
}
