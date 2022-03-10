#include <iostream>
#include <conio.h>
using namespace std;
int m = 30;
int main()
{
    int m = 20;
    {
        int m = 10;
        cout << "we are in inner block" << endl;
        // it will print value of m which is in this block(10)
        cout << "value of m =" << m << "\n";
        // it will print global variable m(30)
        cout << "value of ::m =" << ::m << "\n";
    }
    cout << "we are in outer block" << endl;
    // value of m in outer block will be printed(20)
    cout << "value of m =" << m << "\n";
    // it will print global variable m(30)
    cout << "value of ::m =" << ::m << "\n";
    getch();
    return 0;
}