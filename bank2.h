#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<fstream.h>
#include<bankU.h>
void main(0
{
    cltscr();
    
    bank ac(105,"kapil",2500):
    
    ofstream f1;
    f1.open("data.dat",ios::in||ios::out||ios::binary||ios::ate);
    f1.open("data.dat",ios::end);
    f1.write((char *)&ac,sizwof(ac));
    f1.close();
}