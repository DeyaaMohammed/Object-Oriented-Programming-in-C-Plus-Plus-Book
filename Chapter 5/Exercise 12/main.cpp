/*Revise the four-function fraction calculator from Exercise 12, Chapter 4, so that it uses
functions for each of the four arithmetic operations. They can be called fadd(), fsub(),
fmul(), and fdiv(). Each of these functions should take two arguments of type struct
fraction, and return an argument of the same type.*/
#include <iostream>
using namespace std;

struct fraction{
    int numerator;
    int denominator;
};

fraction fadd(fraction fra1, fraction fra2);
fraction fsub(fraction fra1, fraction fra2);
fraction fmul(fraction fra1, fraction fra2);
fraction fdiv(fraction fra1, fraction fra2);

int main()
{
    fraction ff1, ff2, ff3;
    char oper, ch, o;

    do {
        cout << "Enter first fraction, an operator and a second fraction: ";
        cin >> ff1.numerator >> o >> ff1.denominator >> oper >> ff2.numerator >> o >> ff2.denominator;
        switch(oper)
        {
            case '+':
                 ff3 = fadd(ff1, ff2);
                 break;

            case '-':
                ff3 = fsub(ff1, ff2);
                break;

            case '*':
                ff3 = fmul(ff1, ff2);
                break;

            case '/':
                ff3 = fdiv(ff1, ff2);
                break;

            default: ff3.denominator, ff3.numerator = 0;
        }
        cout << "Answer = " << ff3.numerator << o <<ff3.denominator;

        cout << "\nDo another (Enter 'y' or 'n')? ";
        cin >> ch;
        } while( ch != 'n' );

        return 0;
}

fraction fadd(fraction f1, fraction f2){
    fraction f3;
    f3.numerator = (f1.numerator*f2.denominator + f1.denominator*f2.numerator);
    f3.denominator =  (f1.denominator*f2.denominator);
    return(f3);
}

fraction fsub(fraction f1, fraction f2){
    fraction f3;
    f3.numerator = (f1.numerator*f2.denominator - f1.denominator*f2.numerator);
    f3.denominator =  (f1.denominator*f2.denominator);
    return(f3);
}

fraction fmul(fraction f1, fraction f2){
    fraction f3;
    f3.numerator = (f1.numerator*f2.numerator);
    f3.denominator =  (f1.denominator*f2.denominator);
    return(f3);
}

fraction fdiv(fraction f1, fraction f2){
    fraction f3;
    f3.numerator = (f1.numerator*f2.denominator);
    f3.denominator =  (f1.denominator*f2.numerator);
    return(f3);
}
