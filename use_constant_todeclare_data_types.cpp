//use constant to declare data types

#include <iostream>
using namespace std;
int main() 
{
    const int intVal = 25;
    const float floatVal = 20.25;
    
    const char charVal = 'D';
    const string stringVal = "XYZ";
    cout << "Integer Constant: " << intVal << "\n";
    cout << "Floating point Constant: " << floatVal << "\n";
    cout << "Character Constant: "<< charVal << "\n";
    cout << "String Constant: "<< stringVal << "\n";
    return 0;
}