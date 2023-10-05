/*6. On a certain day the British pound was equivalent to $1.487 U.S., the French franc was
$0.172, the German deutschemark was $0.584, and the Japanese yen was $0.00955.
Write a program that allows the user to enter an amount in dollars, and then displays this
value converted to these four other monetary units.*/
#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    float dollars;
    cout << "Enter the amount in dollars: ";
    cin >> dollars;
    cout << "Amount in British pound are: " << (dollars * 1.487) <<endl;
    cout << "Amount in French franc are: " << (dollars * 0.172) <<endl;
    cout << "Amount in German deutschemark are: " << (dollars * 0.584) <<endl;
    cout << "Amount in Japanese yen are: " << (dollars * 0.00955) <<endl;

    return 0;
}
