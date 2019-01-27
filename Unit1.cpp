#include <vcl.h>
#pragma hdrstop
#include "Unit1.h"
#include "Unit2.h"
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}

void __fastcall TForm1::Button2Click(TObject *Sender)
{
 Form1->Hide();
}

float max(float a, float b)
{
     if (a>b)
            return a;
        else
			return b;
}

void __fastcall TForm1::Button1Click(TObject *Sender)
{
  float a,b,l,Q,f,n,t;

 a=StrToFloat(ComboBox1->Text);
 b=StrToFloat(ComboBox2->Text);
 l=StrToFloat(Edit1->Text);
 Q=577778/(l*max(a,b));
 if(Q>100000)
  Q=100000;

 f=l/200.0;
 if((a<0.6)&&(b<0.6)) {n=0.2; t=40;}
 if((a>=0.6)&&(a<=0.7)||(b>=0.6)&&(b<=0.7)) {n=0.25; t=40;}
 if((a>0.7)||(b<0.7)) {n=0.5; t=60;}

 //передача данных в главную форму
 Form2->Edit1->Text=ComboBox1->Text;
 Form2->Edit2->Text=ComboBox2->Text;
 Form2->Edit3->Text=Edit1->Text;
 Form2->Edit4->Text=FloatToStrF(Q,ffFixed,9,0);
 Form2->Edit5->Text=FloatToStrF(f,ffFixed,9,3);
 Form2->Edit6->Text=FloatToStrF(n,ffFixed,9,2);
 Form2->Edit7->Text=FloatToStrF(t,ffFixed,9,0);

 Form2->lab_l->Caption=Edit1->Text;
 Form2->lab_f->Caption=FloatToStrF(f,ffFixed,9,3);
 Form2->lab_a->Caption="a:"+FloatToStrF(a,ffFixed,9,3);
 Form2->lab_b->Caption="b:"+FloatToStrF(b,ffFixed,9,3);
 Form2->lab_n->Caption="n:"+FloatToStrF(n,ffFixed,9,2);
 Form2->lab_t->Caption="t:"+FloatToStrF(t,ffFixed,9,0);

 Form2->Button1->Caption="Начальные данные выбраны";
 Form2->Button2->Caption="Выберите материал";
 Form2->Button3->Caption="Выберите тип пина";
 Form2->Edit8->Text="";
 Form2->Edit9->Text="";
 Form2->lab_form->Visible=false;
 Form2->Image1->Visible=true;
 Form2->Image2->Visible=false;
 Form2->Image3->Visible=false;
 Form2->Image4->Visible=false;
 Form1->Hide();
}
