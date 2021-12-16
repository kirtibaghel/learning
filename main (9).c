/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <string.h>
#include <stdio.h>

void main()
{
    char s1[10],s2[20];
    strcpy(s1,"delhi");
    //s2=s1;
    strcpy(s2,s2);
    printf("string 1 %s",s1);
    printf("\n string 2 %s",s2);
}    
    
    
    
    
