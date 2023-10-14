/*Revise the four-function fraction calculator program of Exercise 12 in Chapter 3 so that
each fraction is stored internally as a variable of type struct fraction, as discussed in
Exercise 8 in this chapter.*/
#include <iostream>
using namespace std;

struct fraction{
    int numerator;
    int denominator;
};

int main()
{
    fraction f1, f2, f3;
    char oper, ch, o;

    do{
        cout << "Enter first fraction, an operator and a second fraction: ";
        cin >> f1.numerator >> o >> f1.denominator >> oper >> f2.numerator >> o >> f2.denominator;
        
        switch(oper){
            case '+':
                 f3.numerator = (f1.numerator * f2.denominator + f1.denominator * f2.numerator);
                 f3.denominator =  (f1.denominator*f2.denominator);
                 break;

            case '-':
                f3.numerator = (f1.numerator * f2.denominator - f1.denominator * f2.numerator);
                f3.denominator =  (f1.denominator*f2.denominator);
                break;

            case '*':
                f3.numerator = (f1.numerator * f2.numerator);
                f3.denominator =  (f1.denominator * f2.denominator);
                break;

            case '/':
                f3.numerator = (f1.numerator * f2.denominator);
                f3.denominator =  (f1.denominator * f2.numerator);
                break;

            default: 
                f3.denominator, f3.numerator = 0;
        }
        cout << "Answer = " << f3.numerator << o <<f3.denominator;

        cout << "\nDo another (Enter 'y' or 'n')? ";
        cin >> ch;
        }while(ch != 'n');

    return 0;
}
