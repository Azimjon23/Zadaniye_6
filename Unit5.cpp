//---------------------------------------------------------------------------

#include <vcl.h>
#include <math.h>
#pragma hdrstop

#include "Unit5.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm5 *Form5;
String s1,s2;
char c;
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Button1Click(TObject *Sender)
{
    Edit1->Text=Edit1->Text+"1";
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Button2Click(TObject *Sender)
{
     Edit1->Text=Edit1->Text+"2";
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Button3Click(TObject *Sender)
{
   Edit1->Text=Edit1->Text+"3";
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Button10Click(TObject *Sender)
{
     Edit1->Text=Edit1->Text+"0";
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Button15Click(TObject *Sender)
{
   Edit1->Text="";
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Button4Click(TObject *Sender)
{
     Edit1->Text=Edit1->Text+"7";
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Button9Click(TObject *Sender)
{
    Edit1->Text=Edit1->Text+"8";
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Button7Click(TObject *Sender)
{
   Edit1->Text=Edit1->Text+"9";
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Button5Click(TObject *Sender)
{
     Edit1->Text=Edit1->Text+"4";
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Button6Click(TObject *Sender)
{
    Edit1->Text=Edit1->Text+"5";
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Button8Click(TObject *Sender)
{
     Edit1->Text=Edit1->Text+"6";
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Button18Click(TObject *Sender)
{
   s1=Edit1->Text;
c='+';
Edit1->Text="";
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Button13Click(TObject *Sender)
{
    s1=Edit1->Text;
c='-';
Edit1->Text="";
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Button14Click(TObject *Sender)
{
   s1=Edit1->Text;
c='*';
Edit1->Text="";
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Button12Click(TObject *Sender)
{
    s1=Edit1->Text;
c='/';
Edit1->Text="";
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Button11Click(TObject *Sender)
{
   s2=Edit1->Text;
double a,b,rez;
a=StrToFloat(s1);
b=StrToFloat(s2);
if(c=='+')
rez=a+b; else
if(c=='-')
rez=a-b; else
if(c=='*')
rez=a*b; else
if(c=='/')
rez=a/b;
Edit1->Text= FloatToStr(rez);
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Button17Click(TObject *Sender)
{
    double a,rez;
 a=StrToFloat(Edit1->Text);
 rez=sqrt(a);
 Edit1->Text=FloatToStr(rez);
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Button16Click(TObject *Sender)
{
     double a,rez;
 a=StrToFloat(Edit1->Text);
 rez=a*a;
 Edit1->Text=FloatToStr(rez);

}
//---------------------------------------------------------------------------
