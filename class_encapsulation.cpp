#include<iostream>
using namespace std;
class Encapsulation
{
    private:
    int a;
    public:
    void set(int x)
    {
        a=x;
    }

int get()
{
return a;
}
};
int main()
{
Encapsulation b;
b.set(10);
cout<<b.get();
return 0;
}