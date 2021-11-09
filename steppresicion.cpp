// Using set precision
#include <iostream>
#include <iomanip>
using namespace std;
int main(){

    double a= 45.6778945;
    
    cout<<setprecision(4)<<a<<endl;
    cout<<setprecision(3)<<a<<endl;
    cout<<"For decimal values:"<<endl;
    cout<<fixed<<setprecision(4)<<a<<endl;
    cout<<fixed<<setprecision(8)<<a<<endl;
}