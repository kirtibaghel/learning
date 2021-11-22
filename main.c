/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <conio.h>
void main()
{
    int units,bill_amt;
    printf("enter unit consumed");
    scanf("%d,&units");
    if (units<=100)
     bill_amt=units*2;
  else if (units<=200)
     bill_amt=(units-100)*4+200;
  else if (units <=300) 
     bill_amt=(units -200)*6+200+400;
   else bill_amt=(units-300)*8+200+400+600;
   
   printf ("bill amt %d",bill_amt);
   

} 
   
   
   
   
   
   
  
  

