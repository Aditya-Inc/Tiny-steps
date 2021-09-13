//cpp program to find area of rectabgle and square

#include<iostream>
using namespace std;

int main(){
    int length,breadth,side,area_of_rectangle,area_of_square;

    cout<<"enter the length and breadth\n";
    cin>>length>>breadth;

    area_of_rectangle=length*breadth;
    

    cout<<"area of rectangle is "<<area_of_rectangle<<endl;

    cout<<"Enter the value of side\n";
    cin>>side;

    area_of_square=side*side;
    cout<<"area of square = "<<area_of_square<<endl;   
    

    return 0;

}