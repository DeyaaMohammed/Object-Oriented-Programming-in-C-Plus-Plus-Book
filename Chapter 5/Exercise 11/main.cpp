/*Write a program, based on the sterling structure of Exercise 10 in Chapter 4, that
obtains from the user two money amounts in old-style British format (�9:19:11), adds
them, and displays the result, again in old-style format. Use three functions. The first
should obtain a pounds-shillings-pence value from the user and return the value as a
structure of type sterling. The second should take two arguments of type sterling and
return a value of the same type, which is the sum of the arguments. The third should take
a sterling structure as its argument and display its value.*/
#include <iostream>
#include <cmath>
using namespace std;

struct sterling{
    int pounds;
    int shillings;
    int pence;
};

sterling obtain();
sterling sum(sterling ss1, sterling ss2);
void print(sterling sum);

int main()
{
    obtain();

    return 0;
}

sterling obtain(){
    char o;
    sterling s1, s2;

    cout<<"Enter first amount : \x9c";
    cin >> s1.pounds >> o >> s1.shillings >> o >> s1.pence;

    cout<<"Enter second amount : \x9c";
    cin >> s2.pounds >> o >> s2.shillings >> o >> s2.pence;

    sum(s1, s2);
}

sterling sum(sterling sum1, sterling sum2){
    sum1.pounds = sum1.pounds + sum2.pounds;
    sum1.shillings = sum1.shillings + sum2.shillings;
    sum1.pence = sum1.pence + sum2.pence;

    if(sum1.pence >= 12){
        sum1.pence = sum1.pence - 12;
        sum1.shillings++;
    }

    if(sum1.shillings >= 20){
        sum1.shillings = sum1.shillings - 20;
        sum1.pounds++;
    }

    print(sum1);
}

void print(sterling ss){
    char o = ':';
    cout << "Total is \x9c" << ss.pounds << o << ss.shillings << o << ss.pence << endl;
}
