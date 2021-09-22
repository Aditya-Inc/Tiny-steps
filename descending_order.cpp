//descending order


#include<iostream>
using namespace std;
struct student
{
        int rollno;
        char stud_name[50];
};
int main()
{
        struct student stud[50], t;
        int i, j, cnt;
        cout<<"\n How many students you want to enter? :  ";
        cin>>cnt;
        for(i=0; i<cnt; i++)
        {
                cout<<"\n Enter Roll No       :   ";
                cin>>stud[i].rollno;
                cout<<"\n Enter Student Name  :   ";
                cin>>stud[i].stud_name;
        }
        for(i=0; i<cnt-1; i++)
        {
                for(j=i+1; j<cnt; j++)
                {
                        if(stud[i].rollno<stud[j].rollno)
                        {
                                t=stud[i];
                                stud[i]=stud[j];
                                stud[j]=t;
                        }
                }
        }
        cout<<"\n ----------------------------------------------------------------------- ";
        cout<<"\n Displaying Student's Detail in Descending Order \n";
        cout<<" ------------------------------------------------------------------------ \n";
        for(i=0; i<cnt; i++)
        {
                cout<<"\n Roll No       :   "<<stud[i].rollno;
                cout<<"\n Student Name  :   "<<stud[i].stud_name;
        }
        return 0;
}