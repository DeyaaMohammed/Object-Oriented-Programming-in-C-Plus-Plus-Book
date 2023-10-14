/*10. Create a structure called sterling that stores money amounts in the old-style British
system discussed in Exercises 8 and 11 in Chapter 3, "Loops and Decisions." The members
could be called pounds, shillings, and pence, all of type int. The program should
ask the user to enter a money amount in new-style decimal pounds (type double), convert
it to the old-style system, store it in a variable of type struct sterling, and then
display this amount in pounds-shillings-pence format.*/
#include <iostream>
#include <cmath>
using namespace std;

struct sterling{
    int pounds;
    int shillings;
    int pence;
};

int main()
{
    sterling p1;
    float dpounds, fshillings, fpence;
    int pounds, shillings;

    cout << "Enter decimal pounds: ";
    cin >> dpounds;

    p1.pounds = int(dpounds);
    dpounds = dpounds - p1.pounds;

    fshillings = dpounds * 20;
    p1.shillings = int (fshillings);
    fshillings = fshillings - p1.shillings;
    
    p1.pence = fshillings * 12;

    cout << "Equivalent in old notation = \x9c" << p1.pounds << "." << p1.shillings << "." << round(p1.pence) << endl;
    
    return 0;
}
