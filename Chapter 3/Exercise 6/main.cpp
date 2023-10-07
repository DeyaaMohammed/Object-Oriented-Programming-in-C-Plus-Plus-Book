/*Modify the FACTOR program in this chapter so that it repeatedly asks for a number and
calculates its factorial, until the user enters 0, at which point it terminates. You can
enclose the relevant statements in FACTOR in a while loop or a do loop to achieve this
effect.*/
#include <iostream>
using namespace std;

int main()
{
    unsigned int numb = 1;
    unsigned long fact = 1;

    while(numb != 0){
        cout << "Enter a number: ";
        cin >> numb;

        if (numb == 0)
            exit;
        else{
            for(int j = numb; j > 0; j--)
                fact *= j;

            cout << "Factorial is " << fact << endl;
        }

    }

    return 0;
}
