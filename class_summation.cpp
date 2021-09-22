
#include<iostream>
using namespace std;
class summation
{
    private:
    int a,b,c;
    public:
    void sum (int x ,int y) 
{
a=x;
b=y;
c=a+b;
cout<<" Sum of two numbers is : "<<c<<endl;
}
};
int main()
{
    summation s;
    s.sum(5,4);
    return 0;
}