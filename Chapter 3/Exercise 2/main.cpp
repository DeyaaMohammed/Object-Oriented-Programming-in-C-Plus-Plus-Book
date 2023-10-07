/**2. Write a temperature-conversion program that gives the user the option of converting
Fahrenheit to Celsius or Celsius to Fahrenheit. Then carry out the conversion. Use
floating-point numbers. Interaction with the program might look like this:
Type 1 to convert Fahrenheit to Celsius,
2 to convert Celsius to Fahrenheit: 1
Enter temperature in Fahrenheit: 70
In Celsius that’s 21.111111*/
#include <iostream>
using namespace std;

int main()
{
    int response;
    double temper;

    cout << "\nType 1 to convert fahrenheit to celsius,"
    << "\n 2 to convert celsius to fahrenheit: ";
    cin >> response;

    if( response == 1 ){
        cout << "Enter temperature in fahrenheit: ";
        cin >> temper;
        cout << "In celsius that's " << 5.0 / 9.0 * (temper - 32.0);
    }
    else{
        cout << "Enter temperature in celsius: ";
        cin >> temper;
        cout << "In fahrenheit that's " << 9.0 / 5.0 * temper + 32.0;
    }
    cout << endl;

    return 0;
}
