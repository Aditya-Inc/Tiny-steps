//Hierarchical Inheritance
#include<iostream>
#include<conio.h>
using namespace std;
class polygon
{
protected:
int width, height;
public:
void input(int x, int y)
{
width = x;
height = y;
}
};
class rectangle : public polygon
{
public:
int areaR ()
{
return (width * height);
}
};
class triangle : public polygon
{
public:
int areaT ()
{
return (width * height / 2);
}
};
int main ()
{

rectangle rect;
triangle tri;
rect.input(6,8);
tri.input(6,10);
cout <<"Area of Rectangle: "<<rect.areaR()<< endl;
cout <<"Area of Triangle: "<<tri.areaT()<< endl;
getch();
}