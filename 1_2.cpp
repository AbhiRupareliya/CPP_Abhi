//Prepared by 21CE117_ Abhi rupareliya
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int i,j;

    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
        {
            cout<<left<<setw(3)<<i*j;
        }
        cout<<endl;
    }
    cout<<"Prepared by 21CE117_ Abhi rupareliya";
}
