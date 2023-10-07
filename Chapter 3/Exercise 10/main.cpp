/*10. Write another version of the program from Exercise 7 so that, instead of finding the final
amount of your investment, you tell the program the final amount and it figures out how
many years it will take, at a fixed rate of interest compounded yearly, to reach this
amount. What sort of loop is appropriate for this problem? (Don’t worry about fractional
years; use an integer value for the year.)*/
#include <iostream>
using namespace std;

int main()
{
    float initialamount, interestrate, finalamount;
    int noyears = 0;

    cout << "Enter initial amount: ";
    cin >> initialamount;

    cout << "\nEnter interest rate (percent per year): ";
    cin >> interestrate;

    cout << "\nEnter final amount of your investment: ";
    cin >> finalamount;

    while(initialamount <= finalamount){
        initialamount = initialamount + (initialamount * interestrate) / 100;
        noyears++;
    }

    cout << "At the end of "<< noyears << " years, you will have " << finalamount << " dollars." <<endl;
    
    return 0;
}
