/*Create a three-function calculator for old-style English currency, where money amounts
are specified in pounds, shillings, and pence. (See Exercises 10 and 12 in Chapter 2.)
The calculator should allow the user to add or subtract two money amounts, or to multiply
a money amount by a floating-point number. (It doesn't make sense to multiply two
money amounts; there is no such thing as square money. We'll ignore division. Use the
general style of the ordinary four-function calculator in Exercise 4 in this chapter.)*/
#include <iostream>
using namespace std;

int main()
{
    char o;
    char ch;
    int pound1 , shillings1, pence1;
    int pound2, shillings2, pence2;
    float mulnum;

    cout << "Enter operator: ";
    cin >> ch;

    switch(ch){
        case'+':
            cout<< "Enter first amount : \x9c";
            cin >> pound1 >> o >> shillings1 >> o >> pence1;
            cout<< "Enter second amount : \x9c";
            cin >> pound2 >> o >> shillings2 >> o >> pence2;
            pound1 = pound1 + pound2;
            shillings1 = shillings1 + shillings2;
            pence1 = pence1 + pence2;
            break;

        case'-':
            cout<< "Enter first amount : \x9c";
            cin >> pound1 >> o >> shillings1 >> o >> pence1;
            cout<< "Enter second amount : \x9c";
            cin >> pound2 >> o >> shillings2 >> o >> pence2;
            pound1 = pound1 - pound2;
            shillings1 = shillings1 - shillings2;
            pence1 = pence1 - pence2;
            break;

        case'*':
            cout<<"Enter first amount : \x9c";
            cin >> pound1 >> o >> shillings1 >> o >> pence1;
            cout<<"Enter multiplying number : ";
            cin >> mulnum;
            pound1 = pound1 * mulnum;
            shillings1 = shillings1 * mulnum;
            pence1 = pence1 * mulnum;
            break;
        default:
            cout<< "You entered an invalid operator" << endl;
            return 0;
    }
    while(pence1 >= 12 || shillings1 >= 20){


        if(pence1 >= 12){
            pence1 = pence1 - 12;
            shillings1++;
        }

        if(shillings1 >= 20){
            shillings1 =  shillings1 - 20;
            pound1++;
        }
    }

    cout << "Answer is \x9c" << pound1 << o << shillings1 << o << pence1 << endl;

    return 0;
}
