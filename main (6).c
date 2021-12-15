/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<stdio.h>
#include<conio.h>

void main()
{
 char fname[10],lname[10];
 printf(" enter your first name :");
 scanf("%s",fname);
 printf(" enter your last name :");
 scanf("%s",lname);
 
 printf("\nyour name is %s %s",fname,lname);
} 