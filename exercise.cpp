#include <iostream>
using namespace std;

int main()
{
    //Declare variable
    int number;

    cout << "--------------------" << endl;
    cout << "  Add a number" << endl;
    cout << "--------------------" << endl;
    cin >> number;

    //Validate each case if the number is positive
    if (number > 0)
    {
        cout << "The number is positive" << endl;
    }
    //If number is negative
    else if (number < 0)
    {
        cout << "The number is negative" << endl;
    }
    //If number is cero
    if (number == 0)
    {
        cout << "The number is cero" << endl;
    }
}