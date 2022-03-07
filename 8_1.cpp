// Prepare by 21CE117_Abhi Rupareliya
#include <iostream>
using namespace std;

// Base class
class Vegetables
{
public:
    string color;
    void getdata()
    {
        cout << "Enter color of vegetable : ";
        cin >> color;
    }

    void putdata()
    {
        cout << "The color of vegetable is " << color << endl;
    }
};
//Inherited class tomato
class Tomato : public Vegetables
{
public:
    int weight, size;
    void gtdata()
    {
        cout << "Enter Weight : ";
        cin >> weight;
        cout << "Enter size : ";
        cin >> size;
    }
    void ptdata()
    {
        cout << "weight : " << weight << "Kg" << endl;
        cout << "size : " << size << endl;
    }
};

int main()
{
    Tomato tmt;//object of class Tomato 
    tmt.getdata();
    tmt.gtdata();
    cout<<endl;
    tmt.putdata();
    tmt.ptdata();
    cout<<endl<<"Prepare by 21CE117_Abhi Rupareliya";
}