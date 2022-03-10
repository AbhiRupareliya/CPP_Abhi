// prepared by 21ce117_Abhi Rupareliya
#include <iostream>
using namespace std;

class calc
{
public:
    int num1, num2;
    float n1, n2, n3;
    // Declaring function with same name AND diffrent parameter
    void divide(int);
    void divide(int, int);
    void divide(float, float, float);
};
// Defining The "divide" function with diffrent arguments

// one argument
void calc ::divide(int a)
{
    int i, flag = 0;

    for (i = 1; i <= a; i++)
    {
        if (a % i == 0)
            flag++;
    }
    if (flag == 2)
        cout << "Number " << a << " is prime" << endl;
    else
        cout << "Number " << a << " is NOT prime" << endl;
}

// two arguments
void calc ::divide(int a, int b)
{
    if (a % b == 0)
        cout << a << " is divisible by " << b << endl;
    else
        cout << a << " is NOT divisible by " << b << endl;
}

// three arguments
void calc ::divide(float a, float b, float c)
{
    cout << "The Average of " << a << "," << b << " and " << c << " is " << (a + b + c) / 3 << endl;
}

int main()
{
    calc obj; // class object
    int num1, num2;
    float n1, n2, n3;

    cout << "Enter one integer number : ";
    cin >> num1;
    obj.divide(num1); // function "divide" with 1 arguments

    cout << "Enter two integer numbers : ";
    cin >> num1 >> num2;
    obj.divide(num1, num2); // function "divide" with 2 arguments

    cout << "Enter three float numbers : ";
    cin >> n1 >> n2 >> n3;
    obj.divide(n1, n2, n3); // function "divide" with 3 arguments

    cout << "prepared by 21ce117_Abhi Rupareliya";
}
