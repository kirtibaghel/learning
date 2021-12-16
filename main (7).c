/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <string.h>
#include <stdio.h>

void main()
{
int length;
char name[10]="delhi";
length=strlen(name);
printf("\nlength of string %d",length);
strupr(name);
printf("\nupper case %s ",name);
strlwr(name);
printf("\nin lower case %s",name);
strrev(name);
printf("\nin string reverse %s",name);
}





    
}
