/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<stdio.h>
#include <conio.h>

void main()
{
  int num[5]={10,20,30,40,50};
  int search,flag=0;
  clrscr();
  printf("search no.");
  scanf("%d",&search);
  
  for (i=0;i<5;i++)
  {
  if (num[i]==search)
    {
        flag=1;
        break;
    }
  if (flag==1)
    priuntf("%d found at %d index in array",search,i);
    else
    printf("not found");
  }
}  
  
  
  
  
  
  
  
  

    return 0;
}
