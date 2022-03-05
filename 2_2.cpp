// Prepared by 21CE117_Abhi Rupareliya
#include <iostream>
using namespace std;

class student_details
{
    int roll_no;
    string name;
    string class_name;
    char division;

public:
    void read();    // function for reading details of student
    void display(); // function for displaying details of student
};

void student_details ::read()
{
    cout << "Enter name :";
    cin >> name;
    cout << "Enter roll number :";
    cin >> roll_no;
    cout << "Enter class :";
    cin >> class_name;
    cout << "Enter Division :";
    cin >> division;
}

void student_details ::display()
{
    cout << "Name : " << name << endl;
    cout << "Roll number : " << roll_no << endl;
    cout << "Class : " << class_name << endl;
    cout << "Division : " << division << endl;
}

int main()
{
    int i;
    student_details student[5];
    // array of object of size 5 to store details of 5 student

    for (i = 0; i < 5; i++)
    {
        cout << "Enter details of student " << i + 1 << endl;
        student[i].read();
    }

    for (i = 0; i < 5; i++)
    {
        cout << "************************************" << endl;
        cout << "************************************" << endl;
        cout << "Details of student " << i + 1 << endl;
        student[i].display();
    }
    cout << "Prepared by 21CE117_Abhi Rupareliya" << endl;
}
