/*12. Create a four-function calculator for fractions. (See Exercise 9 in Chapter 2, and
Exercise 4 in this chapter.) Here are the formulas for the four arithmetic operations
applied to fractions:
Addition:           a/b + c/d = (a*d + b*c) / (b*d)
Subtraction:        a/b - c/d = (a*d - b*c) / (b*d)
Multiplication:     a/b * c/d = (a*c) / (b*d)
Division:           a/b / c/d = (a*d) / (b*c)
The user should type the first fraction, an operator, and a second fraction. The program
should then display the result and ask whether the user wants to continue.*/
#include <iostream>
using namespace std;

int main()
{
    double a, b, c, d ,ans1,ans2;
    char oper, ch, o;

    do {
        cout << "Enter first fraction, an operator and a second fraction: ";
        cin >> a >> o >> b >> oper >> c >> o >> d;

        switch(oper)
        {
            case '+':
                 ans1 = (a * d + b * c);
                 ans2 =  (b * d);
                 break;

            case '-':
                ans1 = (a * d - b * c);
                ans2 = (b * d);
                break;

            case '*':
                ans1 = (a * c);
                ans2 = (b * d);
                break;

            case '/':
                ans1 = (a * d);
                ans2 = (b * c);
                break;

            default: 
                ans1 = 0;
        }

        cout << "Answer = " << ans1 << o <<ans2;
        cout << "\nDo another (Enter 'y' or 'n')? ";
        cin >> ch;
        } while( ch != 'n' );

    return 0;
}
