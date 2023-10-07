/*Write a program that repeatedly asks the user to enter two money amounts expressed in
old-style British currency: pounds, shillings, and pence. (See Exercises 10 and 12 in
Chapter 2, "C++ Programming Basics.") The program should then add the two amounts
and display the answer, again in pounds, shillings, and pence. Use a do loop that asks the
user whether the program should be terminated. Typical interaction might be
Enter first amount: £5.10.6
Enter second amount: £3.2.6
Total is £8.13.0
Do you wish to continue (y/n)?
To add the two amounts, you'll need to carry 1 shilling when the pence value is greater
than 11, and carry 1 pound when there are more than 19 shillings.*/
#include <iostream>

using namespace std;

int main()
{
    char o;
    char answer;
    int pound1 , shillings1, pence1;
    int pound2, shillings2, pence2;

    do{
        cout<< "Enter first amount : \x9c";
        cin >> pound1 >> o >> shillings1 >> o >> pence1;

        cout<< "\nEnter second amount : \x9c";
        cin >> pound2 >> o >> shillings2 >> o >> pence2;

        pound1 = pound1 + pound2;
        shillings1 = shillings1 + shillings2;
        pence1 = pence1 + pence2;

        if(pence1 >= 12){
            pence1 = pence1 - 12;
            shillings1++;
        }

        if(shillings1 >= 20){
            shillings1 = shillings1 - 20;
            pound1++;
        }

        cout << "Total is \x9c" << pound1 << o << shillings1 << o << pence1 << endl;

        cout << "Do you want to continue?(y/n) : ";
        cin >> answer;
        if(answer == 'n'){
            return 0;
        }
    }
    while(1);
    
    return 0;
}
