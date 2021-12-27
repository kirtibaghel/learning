/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <conio.h>
#include <stdio.h>

void prime(int num);
void main()

{
    int num;
    printf("enter any number");
    scanf("%d"&num);
     
     prime(num);
     
}
void prime(int num)
{
    int i,flag=1;
    for(i=2;i<num;i++)
      {
          if (num%i==0)
            {
                flag=0;
                break;
            }
      }
    if (flag==1)
       printf("%d prime number",num);
          else
       printf("%d not prime number",num);
}
    
    
    
    
    
    
    