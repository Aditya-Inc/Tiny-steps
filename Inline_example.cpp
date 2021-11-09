#include <iostream>
using namespace std;
inline int cube(int s)
{
    return s*s*s;
}
int main()
{
    cout << "The cube of 3 is: " << cube(3) << "\n";
    cout << "The cube of 5 is: " << cube(5) << "\n";
    cout << "The cube of 6 is: " << cube(6) << "\n";
    cout << "The cube of 8 is: " << cube(8) << "\n";
    return 0;
}