/*7. Write a program that calculates how much money you'll end up with if you invest an
amount of money at a fixed interest rate, compounded yearly. Have the user furnish the
initial amount, the number of years, and the yearly interest rate in percent. Some interaction
with the program might look like this:
Enter initial amount: 3000
Enter number of years: 10
Enter interest rate (percent per year): 5.5
At the end of 10 years, you will have 5124.43 dollars.*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float initialamount, noyears, interestrate;

    cout << "Enter initial amount: ";
    cin >> initialamount;

    cout << "\nEnter number of years: ";
    cin >> noyears;

    cout << "\nEnter interest rate (percent per year): ";
    cin >> interestrate;

    for(int i=0;i<noyears;i++){
        initialamount = initialamount + (initialamount * interestrate) / 100;
    }

    cout << "At the end of " << noyears << " years, you will have " << initialamount << " dollars." << endl;
    
    return 0;
}
