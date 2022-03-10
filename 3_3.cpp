// prepared by 21ce117_Abhi Rupareliya
#include <iostream>
using namespace std;

int main()
{
    int num, i;
    cout << "Enter the number of elements :";
    cin >> num;
    // creating array dynamicaly
    int *array = new int[num];
    // taking input of array elements
    for (i = 0; i < num; i++)
    {
        cout << "Enter element " << i + 1 << ":";
        cin >> array[i];
    }
    // adding 2 in each elements
    cout << "Elements after adding 2" << endl;

    for (i = 0; i < num; i++)
    {
        cout << "Element " << i + 1 << ":" << array[i] + 2 << endl;
    }
    // deleting an array
    delete array;

    cout << "prepared by 21ce117_Abhi Rupareliya";

    return 0;
}