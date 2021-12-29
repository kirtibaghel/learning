z

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <conio.h>
#include <stdio.h>

void swap(int*,int*);
void main()
{
int a=10,b=20;
swap(&a,&b);
printf("value of %d",a);
printf("\n value of %d",b);
}
void swap(int*x,int*y)
{
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
}

