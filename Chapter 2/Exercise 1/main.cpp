/**1. Assuming there are 7.481 gallons in a cubic foot, write a program that asks the user to
enter a number of gallons, and then displays the equivalent in cubic feet.*/

#include <iostream>
using namespace std;

int main()
{
    float gallons = 0;
    cout << "Enter the number of gallons" << endl;
    cin >> gallons;
    float cubic = gallons / 7.481;
    cout << "Equivalent in cubic feet is " << cubic << endl;
    return 0;
}
