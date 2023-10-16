/**1. Write a function called reversit() that reverses a C-string (an array of char). Use a for
loop that swaps the first and last characters, then the second and next-to-last characters,
and so on. The string should be passed to reversit() as an argument.
Write a program to exercise reversit(). The program should get a string from the user,
call reversit(), and print out the result. Use an input method that allows embedded
blanks. Test the program with Napoleon�s famous phrase, "Able was I ere I saw Elba."*/
#include <iostream>
#include <cstring>
using namespace std;

void reversit(char[]);

int main()
{
    const int MAX = 80;
    char str[MAX];

    cout << "\nEnter a string: ";
    cin.get(str, MAX);
    reversit(str);

    cout << "Reversed string is: ";
    cout << str << endl;

    return 0;
}

void reversit(char s[]){
    int len = strlen(s);

    for(int j = 0; j < len / 2; j++){
        char temp = s[j];
        s[j] = s[len - j - 1];
        s[len - j - 1] = temp;
    }
}
