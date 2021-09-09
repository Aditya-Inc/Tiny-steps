//Cpp program to calculate simple intrest


#include<iostream>
using namespace std;
int main()
{
  float p, t, r, interest;

  cout << "Enter principal amount, time and rate:";
  cin >> p >> t >> r;

  interest = (p*t*r)/100;

  cout << "Interest = " << interest << endl;

  return 0;
}