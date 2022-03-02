// Prepared by 21CE117_ Abhi rupareliya
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    float n1,n2,n;
    cout<<"Enter float number 1:";
    cin>>n1;
    cout<<"Enter float number 2:";
    cin>>n2;
    
    cout.precision(2);
    n=n1+n2;
    cout<<"Addition using fixed:"<<fixed<<n<<endl;
    cout<<"Addition using scientific:"<<scientific<<n<<endl;
    cout<<fixed;
    cout<<"Addition using setprecision():"<<setprecision(3)<<n<<endl;
    cout<<"Prepared by 21CE117_ Abhi rupareliya";

}