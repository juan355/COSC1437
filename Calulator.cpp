#include <iostream>


using namespace std;

int main()
{
    double in;
    double feet;
    cout << "Enter nuber of inches: ";
    cin >> in;

    feet = in/12;
    cout << "This is your conversion in feet: " << feet << endl;
    return 0;
}