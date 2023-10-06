/*7. You can convert temperature from degrees Celsius to degrees Fahrenheit by multiplying
by 9/5 and adding 32. Write a program that allows the user to enter a floating-point number
representing degrees Celsius, and then displays the corresponding degrees
Fahrenheit.*/
#include <iostream>
using namespace std;

int main()
{   
    float temp;
    cout << "Enter temperature degrees in Celsius: ";
    cin >> temp;
    cout << "Temperature degrees in fahrenheit: " << ((temp * 9 / 5) + 32) << endl;
    return 0;
}
