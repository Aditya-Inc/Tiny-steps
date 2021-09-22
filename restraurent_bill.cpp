//Write a C++ program to accept bill no, customer code, name and amount of 100 bills and print the details of the customer with highest billed amount.

#include<iostream>
using namespace std;

struct customer
{
     int billno;
     int custcode;
     char custname[20];
     float amount;
};
int main()
{
     struct customer c[3];
     int i, max;

     for(i=0;i<3;i++)
     {
          cout<<"\n Enter Bill No.      :  ";
          cin>>c[i].billno;
          cout<<"\n Enter Customer Code :  ";
          cin>>c[i].custcode;
          cout<<"\n Enter Customer Name :  ";
          cin>>c[i].custname;
          cout<<"\n Enter Amount        :  ";
          cin>>c[i].amount;
          cout<<"\n -----------------------------";
     }
     for(i=0;i<3;i++)
     {
          cout<<"\n Bill No.        :  "<<c[i].billno;
          cout<<"\n Customer Code   :  "<<c[i].custcode;
          cout<<"\n Customer Name   :  "<<c[i].custname;
          cout<<"\n Amount          :  "<<c[i].amount<<endl;
     }
     max=c[i].amount;
     for(i=0;i<3;i++)
     {
          if(c[i].amount>max)
          {
               max=c[i].amount;
          }
     }
     for(i=0;i<3;i++)
     {
          if(c[i].amount==max)
          {
               cout<<"\n ------------------------------------------------\n";
               cout<<"\n Highest billed amount : "<<c[i].custname;
               cout<<"\n Customer name          : "<<c[i].amount;
          }
     }
     return 0;
}