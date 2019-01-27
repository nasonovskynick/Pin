#include <vcl.h>
#pragma hdrstop
#include "Unit4.h"
#include "Unit2.h"
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;

__fastcall TForm4::TForm4(TComponent* Owner)
	: TForm(Owner)
{
}

void __fastcall TForm4::Button2Click(TObject *Sender)
{
 Form4->Hide();
}

void __fastcall TForm4::Button1Click(TObject *Sender)
{
float a,b,S,P,G;
 a=StrToFloat(Form2->Edit1->Text);
 b=StrToFloat(Form2->Edit2->Text);

//отображение гладкого пина
if(ComboBox1->Text=="bold")
{
 Form2->Image2->Visible=false;
 Form2->Image3->Visible=false;
 Form2->Image4->Visible=false;
 Form2->lab_form->Visible=false;
}

//отображение пина типа "star"
if(ComboBox1->Text=="star")
{
 Form2->Image2->Visible=true;
 Form2->Image3->Visible=false;
 Form2->Image4->Visible=false;
 Form2->lab_form->Visible=true;
 if((a<=0.5)&&(b<=0.5))
 {
	 S=0.75;
 }
 if(((a>0.5)&&(a<=0.6))||((b>0.5)&&(b<=0.6)))
 {
	 S=1.17;
 }
 if((a>0.6)||(b>0.6))
 {
	 S=1.5;
 }
 Form2->lab_form->Caption="S: "+FloatToStrF(S,ffFixed,9,2);
}

//отображение пина типа "press fit"
if(ComboBox1->Text=="press fit")
{
 Form2->Image2->Visible=false;
 Form2->Image3->Visible=true;
 Form2->Image4->Visible=false;
 Form2->lab_form->Visible=true;
 if((a<=0.5)&&(b<=0.5))
 {
	 P=0.8;
 }
 if(((a>0.5)&&(a<=0.6))||((b>0.5)&&(b<=0.6)))
 {
	 P=1.09;
 }
 if((a>0.6)||(b>0.6))
 {
	 P=1.22;
 }
 Form2->lab_form->Caption="P: "+FloatToStrF(P,ffFixed,9,2);
}

//отображение пина типа "harpoon"
if(ComboBox1->Text=="harpoon")
{
 Form2->Image2->Visible=false;
 Form2->Image3->Visible=false;
 Form2->Image4->Visible=true;
 Form2->lab_form->Visible=true;
 if((a<=0.5)||(b<=0.5))
 {
	 G=0.6;
 }
 if((a>0.5)||(b>0.5))
 {
 if(Form2->Edit8->Text=="CuSn4"||Form2->Edit8->Text=="CuSn6"||Form2->Edit8->Text=="CuSn8")
	 {
	 G=0.8;
	 }
 if(Form2->Edit8->Text=="CuNiSi"||Form2->Edit8->Text=="CuNi3SiMg")
	 {
	 G=0.9;
	 }
 }
 Form2->lab_form->Caption="G: "+FloatToStrF(G,ffFixed,9,2);
}
 Form2->Button3->Caption="Тип пина: "+ComboBox1->Text;
 Form2->Edit9->Text=ComboBox1->Text;
 Form4->Hide();
}
