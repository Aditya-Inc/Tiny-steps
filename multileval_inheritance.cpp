//Multilevel Inheritance
#include<iostream>
#include<conio.h>
using namespace std;
class student
{
protected:
int roll;
public:
void get_number(int a)
{
roll = a;
}
void put_number()
{
cout<<"Roll Number: "<<roll<<"\n";
}
};
class test : public student
{
protected:
float sub1;
float sub2;
public:
void get_marks(float x,float y)
{
sub1 = x;
sub2 = y;
}
void put_marks()
{
cout<<"Marks in Subject 1 = "<<sub1<<"\n";
cout<<"Marks in Subject 2 = "<<sub2<<"\n";
}
};
class result : public test
{
private:
float total;
public:
void display()
{
total = sub1 + sub2;
put_number();
put_marks();
cout<<"Total = "<<total<<"\n";
}
};
int main()
{

result student;
student.get_number(83);
student.get_marks(99.0,98.5);
student.display();
getch();
}