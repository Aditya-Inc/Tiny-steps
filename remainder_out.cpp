//Cpp program to calculate remainder and divide 

#include<iostream>
using namespace std;
int main ()
{
    int a,b,c,rim;

    cout<<" Enter First number \n ";
    cin>>a;
    cout<<" Enter Second number \n ";
    cin>>b;
    c=a/b;
    rim=a%b;
    
    cout<<" Quatient of "<<a<<" / "<<b<<" = "<<c<<endl;
    cout<<" Remainder is "<<rim;
    
    return 0;
    
}