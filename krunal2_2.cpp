//created by krunal jodhani 21ce045
#include<iostream>
#include<string.h>
#include<sstream>
using namespace std;
class student
{
public:
    int roll_no;
    char division;
    string name;
    string Class;
    void read_roll_no(int a)
    {
        roll_no=a;
    }
    void read_division(char b)
    {
        division=b;
    }
    void read_name(string c)
    {
        name=c;
    }
    void read_Class(string d)
    {
        Class=d;
    }
    int display_roll_no()
    {
        return roll_no;
    }
    char display_division()
    {
        return division;
    }
    string display_name()
    {
        return name;
    }
    string display_Class()
    {
        return Class;
    }

}s1,s2,s3,s4,s5,s;

int main()
{
    int roll_no;
    char division;
    string name;
    string Class;

    for(int i=1;i<=5;i++){

    if(i==1)
    s=s1;
    else if(i==2)
    s=s2;
    else if(i==3)
    s=s3;
    else if(i==4)
    s=s4;
    else if(i==5)
    s=s5;

    cout<<"Entre information of student - "<<i<<"\n";
    cout<<"Enter roll number:";     cin >> roll_no; 
    cout<<"Enter division:";        cin >> division;
    cout<<"Enter Name:";            cin >> name;
    cout<<"Enter class:";           cin >> Class;
    s.read_roll_no(roll_no);
    s.read_division(division);
    s.read_name(name);
    s.read_Class(Class);
    }

for(int i=1;i<=5;i++){

    if(i==1)
    s=s1;
    else if(i==2)
    s=s2;
    else if(i==3)
    s=s3;
    else if(i==4)
    s=s4;
    else if(i==5)
    s=s5;
    cout<<"***** student - "<<i<<" information *****\n";
    cout<<s.display_roll_no()<<"\n";
    cout<<s.display_division()<<"\n";
    cout<<s.display_name()<<"\n";
    cout<<s.display_Class()<<"\n";
}

    

    cout<<"created by krunal jodhani 21ce045";
}