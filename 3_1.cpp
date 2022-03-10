#include <iostream>
using namespace std;
int main()
{
    int no1 = 10, no2 = 12;
    int &x = no1;
    // int &r;//refrence variable 'r' is not initialized.
    // int &c = NULL; //we cannot assign NULL to refrence variable.
    // int &d[2] = {no1, no2};//We cannot declare array of refrences.
    cout << "x = " << x + 20 << endl;
    cout << "no1=" << no1 + 10 << endl;

    return 0;
}