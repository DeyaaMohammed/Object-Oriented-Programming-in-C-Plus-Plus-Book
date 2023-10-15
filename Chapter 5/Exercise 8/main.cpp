/*8. Write a function called swap() that interchanges two int values passed to it by the calling
program. (Note that this function swaps the values of the variables in the calling program,
not those in the function.) You'll need to decide how to pass the arguments. Create
a main() program to exercise the function.*/
#include <iostream>
using namespace std;

void swaps(int&, int&);

int main()
{
    int n1, n2;
    cout << "Enter the first number: ";
    cin >> n1;

    cout << "Enter the second number: ";
    cin >> n2;

    swaps(n1, n2);
    cout << "Numbers after swapping are: " << n1 << ", " << n2 <<"." << endl;

    return 0;
}

void swaps(int& numb1, int& numb2){
    int numb3 = numb1;
    numb1 = numb2;
    numb2 = numb3;
}
