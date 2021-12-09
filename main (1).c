/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <conio.h>

void main()
{
int num[5]={10,20,30,40,50};
int i,first=0,second=0;
clrscr();
 for (i=0;i<5;i++)
  {
  if (first <num[i])
    {
      second=first;
      first=num[i];
    } 
  else if (second<num[i]&& first>num[i])
     second=num[i];
     
  } 
printf("\nfirst largest %d",first);
printf("\nsecond largest %d",second);
}

    

