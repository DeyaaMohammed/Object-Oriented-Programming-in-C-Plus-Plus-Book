/**2. Raising a number n to a power p is the same as multiplying n by itself p times. Write a
function called power() that takes a double value for n and an int value for p, and
returns the result as a double value. Use a default argument of 2 for p, so that if this
argument is omitted, the number n will be squared. Write a main() function that gets values
from the user to test this function.*/
#include <iostream>
using namespace std;

double power( double n, int p=2);

int main()
{
    double number, answer;
    int pow;
    char yeserno;

    cout << "\nEnter number: ";
    cin >> number;
    cout << "Want to enter a power (y/n)? ";
    cin >> yeserno;

    if( yeserno == 'y' ){
        cout << "Enter power: ";
        cin >> pow;
        answer = power(number, pow);
    }
    else
        answer = power(number);

    cout << "Answer is " << answer << endl;

    return 0;
}

double power(double n, int p){
    double result = 1.0;
    
    for(int j = 0; j < p; j++)
        result *= n;

    return result;
}
