//Prepare by 21CE117_Abhi Rupareliya
#include <iostream>
using namespace std;

class swap_num
{
    int num1, num2;

public:
    void read();
    void swap();//swap the values of two number
    void display();
};

void swap_num ::read()
{
    cout << "Enter number 1 : ";
    cin >> num1;
    cout << "Enter number 2 : ";
    cin >> num2;
}

void swap_num ::display()
{
    cout << "Num 1 is " << num1 << endl;
    cout << "Num 2 is " << num2 << endl;
}

void swap_num ::swap()
{
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
}

int main()
{
    int n1, n2;
    swap_num obj;
    
    obj.read();

    cout << "Numbers Before Swapping" << endl;
    obj.display();

    obj.swap();

    cout << "Numbers After Swapping" << endl;
    obj.display();

    cout<<"Prepare by 21CE117_Abhi Rupareliya";
}