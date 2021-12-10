/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<stdio.h>
#include<conio.h>


void main()
{
int num[3][5];
int i,j;
printf("\nEnter Values in");
for (i=0;i<3;i++)
 {
     for (j=0;j<5;j++)
        scanf("%d",&num[i][j]);
 }
printf("In Array Values\n");
 for (i=0;i<3;i++)
  {
      for (j=0;j<5;j++)
     {
         printf("\t %d",num[i][j]);
     }
     printf("\n");
  }
} 
     








 
 
 
 

 
 
 
 
 