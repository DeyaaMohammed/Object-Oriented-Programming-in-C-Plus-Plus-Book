/*7. Start with the power() function of Exercise 2, which works only with type double.
Create a series of overloaded functions with the same name that, in addition to double,
also work with types char, int, long, and float. Write a main() program that exercises
these overloaded functions with all argument types.*/
#include <iostream>
using namespace std;

double power( double n, int p = 2);
float power( float n, int p = 2);
long power( long n, int p = 2);
int power( int n, int p = 2);
void power( char n, int p = 2);

int main()
{
    double numberdo, answerdo;
    long numberlo, answerlo;
    int numberin, answerin;
    char numberch, answerch;
    float numberfl, answerfl;
    int pow;
    char yeserno;
    char choice;

    cout << "Choose the desired type (int(i), long(l), float(f), double(d), char(c): ";
    cin >> choice;

    switch(choice){
        case 'i':
            cout << "\nEnter number: ";
            cin >> numberin;
            cout << "Want to enter a power (y/n)? ";
            cin >> yeserno;

            if( yeserno == 'y' ){
                cout << "Enter power: ";
                cin >> pow;
                answerin = power(numberin, pow);
            }
            else
                answerin = power(numberin);
            cout << "Answer is " << answerin << endl;
            break;

        case 'd':
            cout << "\nEnter number: ";
            cin >> numberdo;
            cout << "Want to enter a power (y/n)? ";
            cin >> yeserno;

            if( yeserno == 'y' ){
                cout << "Enter power: ";
                cin >> pow;
                answerdo = power(numberdo, pow);
            }
            else
                answerdo = power(numberdo);
            cout << "Answer is " << answerdo << endl;
            break;
        
        case 'l':
            cout << "\nEnter number: ";
            cin >> numberlo;
            cout << "Want to enter a power (y/n)? ";
            cin >> yeserno;

            if( yeserno == 'y' ){
                cout << "Enter power: ";
                cin >> pow;
                answerlo = power(numberlo, pow);
            }
            else
                answerlo = power(numberlo);
            cout << "Answer is " << answerlo << endl;
            break;

        case 'f':
            cout << "\nEnter number: ";
            cin >> numberfl;
            cout << "Want to enter a power (y/n)? ";
            cin >> yeserno;

            if( yeserno == 'y' ){
                cout << "Enter power: ";
                cin >> pow;
                answerfl = power(numberfl, pow);
            }
            else
                answerfl = power(numberfl);
            cout << "Answer is " << answerfl << endl;
            break;

        case 'c':
            cout << "\nEnter number: ";
            cin >> numberch;
            cout << "Want to enter a power (y/n)? ";
            cin >> yeserno;

            if( yeserno == 'y' ){
                cout << "Enter power: ";
                cin >> pow;
                power(numberch, pow);
            }
            else
                power(numberch);
            break;

        default:
            cout << "Enter a valid input (first letter only)" << endl;
            break;
    }
}

double power(double n, int p){
    double result = 1.0;
    for(int j = 0; j < p; j++)
        result *= n;
    return result;
}

float power(float n, int p){
    float result = 1.0;
    for(int j = 0; j < p; j++)
        result *= n;
    return result;
}

long power(long n, int p){
    long result = 1;
    for(int j = 0; j < p; j++)
        result *= n;
    return result;
}

int power(int n, int p){
    int result = 1;
    for(int j = 0; j < p; j++)
        result *= n;
    return result;
}

void power(char n, int p){
    char resultch;
    int x = n - '0';
    int result = 1;

    for(int j = 0; j < p; j++)
        result *= x;

    cout << "Answer is " << result << endl;
}
