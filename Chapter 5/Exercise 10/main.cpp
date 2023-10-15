/*10. Write a function that, when you call it, displays a message telling how many times it has
been called: "I have been called 3 times", for instance. Write a main() program that calls
this function at least 10 times. Try implementing this function in two different ways.
First, use a global variable to store the count. Second, use a local static variable. Which
is more appropriate? Why can't you use a local variable?*/
#include <iostream>
using namespace std;

int cntglobal = 0;
void globalvar();
void localvar();

int main(){
    for (int i = 0 ; i < 10 ; i++){
        localvar();
    }
    cout << endl;

    for (int j = 0 ; j < 10 ; j++){
        globalvar();
    }

    return 0;
}

void localvar(){
    static int cntlocal = 0;
    cntlocal++;
    cout << "I am a local variable function and I have been called " << cntlocal << " times" << endl;

}

void globalvar(){
    cntglobal++;
    cout << "I am a global variable function and I have been called " << cntglobal << " times" << endl;

}
