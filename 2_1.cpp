//Prepared by 21CE117_ Abhi rupareliya
#include<iostream>
using namespace std;

struct College_Details
{
    char college_name[10];
    char college_code[10];
    char department[5];
    int intake;
};
int main()
{
    struct College_Details var;

    cout<<"+++++ Enter College Information ++++"<<endl<<endl;
    cout<<"Name of the college:";
    cin>>var.college_name;

    cout<<"College Code:";
    cin>>var.college_code;

    cout<<"Department:";
    cin>>var.department;

    cout<<"Department In-take:";
    cin>>var.intake;
    cout<<endl;

    cout<<"******** College Information ********"<<endl<<endl;
    cout<<"Name of the college : "<<var.college_name<<endl;
    cout<<"College University Code : "<<var.college_code<<endl;
    cout<<"Name of the Department : "<<var.department<<endl;
    cout<<"The department of "<<var.department<<" has intake : "<<var.intake<<endl;
    cout<<"Prepared by 21CE117_ Abhi rupareliya";

}