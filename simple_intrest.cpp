//Cpp program to calculate simple intrest

#include<iostream>
using namespace std;

int main(){

    int principal,rate,time,simple_interest;

    cout<<"enter the principal amount\n";
    cin>>principal;

    cout<<"enter the rate of interest\n";
    cin>>rate;

    cout<<"enter the time in years\n";
    cin>>time;

    simple_interest=(principal*rate*time)/100;

    cout<<"simple interest="<<simple_interest;


    return 0;
}