/**3. Write a function called zeroSmaller() that is passed two int arguments by reference
and then sets the smaller of the two numbers to 0. Write a main() program to exercise
this function.*/
#include <iostream>
using namespace std;

int main()
{
    void zeroSmaller(int&, int&);
    int a=4, b=7, c=11, d=9;

    zeroSmaller(a, b);
    zeroSmaller(c, d);

    cout << "\na=" << a << " b=" << b << " c=" << c << " d=" << d;

    return 0;
}

void zeroSmaller(int& first, int& second){
    if( first < second )
        first = 0;
    else
        second = 0;
}
