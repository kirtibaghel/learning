
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

 
    

