/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <conio.h>
#include <stdio.h>

int factorial(int);
void main()

{
    int num=5,fact;
    fact=factorial(num);
    printf("\n factorial%d",fact);
}
int factorial(int num)
{
    int fact=1,i;
    for (i=1;i<=num;i++)
    fact=fact x i;
    
    return fact;
}
