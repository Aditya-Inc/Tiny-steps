//where a variable has been declared at the top, but it has been defined inside the main function

#include <iostream>
using namespace std;

extern int a, b;
extern int c;
extern float f;

int main () 
{
    int a, b;
    int c;
    float f;
    a = 25;
    b = 60;
    c = a + b;
    cout << c << endl ;
    f = 36.0/9.0;
    cout << f << endl ;
    return 0;
}