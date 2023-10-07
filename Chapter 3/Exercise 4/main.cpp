/**Create the equivalent of a four-function calculator. The program should ask the user to
enter a number, an operator, and another number. (Use floating point.) It should then
carry out the specified arithmetical operation: adding, subtracting, multiplying, or dividing
the two numbers. Use a switch statement to select the operation. Finally, display the
result.
When it finishes the calculation, the program should ask whether the user wants to do
another calculation. The response can be 'y' or 'n'. Some sample interaction with the
program might look like this:
Enter first number, operator, second number: 10 / 3
Answer = 3.333333
Do another (y/n)? y
Enter first number, operator, second number: 12 + 100
Answer = 112
Do another (y/n)? n*/
#include <iostream>
using namespace std;

int main()
{
    double n1, n2, ans;
    char oper, ch;
    do {
        cout << "\nEnter first number, operator, second number: ";
        cin >> n1 >> oper >> n2;

        switch(oper)
        {
            case '+': ans = n1 + n2; break;
            case '-': ans = n1 - n2; break;
            case '*': ans = n1 * n2; break;
            case '/': ans = n1 / n2; break;
            default: ans = 0;
        }

        cout << "Answer = " << ans;
        cout << "\nDo another (Enter 'y' or 'n')? ";
        cin >> ch;
        } while( ch != 'n' );
        
    return 0;
}
