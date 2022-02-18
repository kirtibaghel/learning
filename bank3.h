#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<fstream.h>
#include<bankU.h>
void main()
{
    clrscr();
    
    bank ac;

    
    fstream f1;("data.dat",ios::in||ios::out||ios::binary||ios::ate);
    
    f1.seekg(0,ios::beg);
    while(f1.read((char *)&Ac, sizeof (Ac)))
    {
        ac.show_acc_info();
    }
    f1.close();
}