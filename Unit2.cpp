#include <vcl.h>
#pragma hdrstop
#include "Unit2.h"
#include "Unit1.h"
#include "Unit3.h"
#include "Unit4.h"
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;

__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}

void __fastcall TForm2::Button1Click(TObject *Sender)
{
  Form1->Show();
}

void __fastcall TForm2::Button2Click(TObject *Sender)
{
  Form3->Show();
}

void __fastcall TForm2::Button3Click(TObject *Sender)
{
  Form4->Show();
}

//сохранение данных в файл
void __fastcall TForm2::Button4Click(TObject *Sender)
{
 Memo1->Clear();
 Memo1->Lines->Add("a: "+Edit1->Text.Trim());
 Memo1->Lines->Add("b: "+Edit2->Text.Trim());
 Memo1->Lines->Add("l: "+Edit3->Text.Trim());
 Memo1->Lines->Add("Q: "+Edit4->Text.Trim());
 Memo1->Lines->Add("f: "+Edit5->Text.Trim());
 Memo1->Lines->Add("n: "+Edit6->Text.Trim());
 Memo1->Lines->Add("t: "+Edit7->Text.Trim());
 Memo1->Lines->Add("M: "+Edit8->Text.Trim());
 Memo1->Lines->Add("W: "+Form4->ComboBox1->Text.Trim());

if( SaveDialog1 ->Execute())
 {
 Memo1->Lines->SaveToFile(SaveDialog1 ->FileName + ".txt");
 }
}

void __fastcall TForm2::Button5Click(TObject *Sender)
{
float a,b,l,Q,f,n,t;
AnsiString s="";
 Memo1->Clear();
 if( OpenDialog1 ->Execute())
 {
 Memo1->Lines->LoadFromFile(OpenDialog1 ->FileName);
 }

 for(int i=0; i < Memo1->Lines->Count; i++)
 {
   if(Memo1->Lines->Strings[i].Pos("a:")>0)
   {
	   Edit1->Text=Memo1->Lines->Strings[i].SubString(3,Memo1->Lines->Strings[i].Length()-2);
	   Form1->ComboBox1->Text=Edit1->Text;
	   Form2->lab_a->Caption="a:"+Edit1->Text;
   }
   if(Memo1->Lines->Strings[i].Pos("b:")>0)
   {
	   Edit2->Text=Memo1->Lines->Strings[i].SubString(3,Memo1->Lines->Strings[i].Length()-2);
	   Form1->ComboBox2->Text=Edit2->Text;
	   Form2->lab_b->Caption="b:"+Edit2->Text;
   }
   if(Memo1->Lines->Strings[i].Pos("l:")>0)
   {
	   Edit3->Text=Memo1->Lines->Strings[i].SubString(3,Memo1->Lines->Strings[i].Length()-2);
	   Form1->Edit1->Text=Edit3->Text;
	   Form2->lab_l->Caption="l:"+Edit3->Text;
   }
   if(Memo1->Lines->Strings[i].Pos("Q:")>0)
   {
	   Edit4->Text=Memo1->Lines->Strings[i].SubString(3,Memo1->Lines->Strings[i].Length()-2);
   }
   if(Memo1->Lines->Strings[i].Pos("f:")>0)
   {
	   Edit5->Text=Memo1->Lines->Strings[i].SubString(3,Memo1->Lines->Strings[i].Length()-2);
	   Form1->Edit1->Text=Edit5->Text;
	   Form2->lab_f->Caption="f:"+Edit5->Text;
   }
   if(Memo1->Lines->Strings[i].Pos("n:")>0)
   {
	   Edit6->Text=Memo1->Lines->Strings[i].SubString(3,Memo1->Lines->Strings[i].Length()-2);
	   Form2->lab_n->Caption="n:"+Edit6->Text;
   }
   if(Memo1->Lines->Strings[i].Pos("t:")>0)
   {
	   Edit7->Text=Memo1->Lines->Strings[i].SubString(3,Memo1->Lines->Strings[i].Length()-2);
	   Form2->lab_t->Caption="t:"+Edit7->Text;
   }
   if(Memo1->Lines->Strings[i].Pos("M:")>0)
   {
	   Edit8->Text=Memo1->Lines->Strings[i].SubString(3,Memo1->Lines->Strings[i].Length()-2);
	   Form3->ComboBox1->Text=Edit8->Text.Trim();
	   Form3->Button1->Click();
  }
  if(Memo1->Lines->Strings[i].Pos("W:")>0)
   {
	  s=Memo1->Lines->Strings[i].SubString(3,Memo1->Lines->Strings[i].Length()-2);
	  Form4->ComboBox1->Text=s.Trim();
	  Form4->Button1->Click();
  }
 }
}

