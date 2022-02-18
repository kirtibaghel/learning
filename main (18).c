

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
class bank
{
    int accno;
    char name[10];
    int balance;
    public :
    bank()
    {
        accno=0;
        balance=0;
    }
    bank(int a,char *n,int b)
    {
        accno=a;
        balance=b;
        strcpy(name,n);
    }
    void show_acc_info()
    {
        cout<<"\n\nacc no :"<<accno;
    cout<<"\nname :"<<name;
    accno=0;
    balance=0;
    }
    bank(int a,char *n,int b)
    {
    accno=a;
    balance =b;
    strcpy(name,n);
    }   
   void show_acc_info()
   {
       cout<<"\n\nacc no : "<<accno;
       cout<<"\nname :"<<name;
       cout<<"\nbalance : "<<balance;
   }
   };

 
    

