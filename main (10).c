/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <string.h>
#include <stdio.h>

void main()
{
    char f_name[10];
    char l_name[10];
    char full_name[20];
    strcpy(f_name,"kirti");
    strcpy(l_name,"baghel");
    strcpy(full_name,f_name);
    strcat(full_name," ");
    strcat(full_name,l_name);
    printf("full name %s",full_name);
}    
    
    
    
    
 
    
    
    
    
