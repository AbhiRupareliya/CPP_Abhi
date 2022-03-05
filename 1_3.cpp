// prepare by 21ce117_Abhi rupareliya
#include <iostream>
// setprecision is defined in iomanip.
#include <iomanip>
using namespace std;
int main()
{
    float *p1, *p2;
    float a, b, sum;
    
    cout << "Enter two numbers" << endl;
    cin >> a >> b;

    p1 = &a;
    p2 = &b;
    sum = *p1 + *p2;

    cout << "Using only sum:" << sum << endl;
    cout << "Using setprecision:" << setprecision(2) << sum << endl;
    cout << "Using fixed setprecision:" << fixed << setprecision(2) << sum << endl;
    cout << "Using scientific setprecision:" << scientific << setprecision(2) << sum << endl;
    cout << "prepare by 21ce117_Abhi rupareliya";
}
