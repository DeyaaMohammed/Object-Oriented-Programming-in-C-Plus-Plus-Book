/*Create a structure called time. Its three members, all type int, should be called hours,
minutes, and seconds. Write a program that prompts the user to enter a time value in
hours, minutes, and seconds. This can be in 12:59:59 format, or each number can be
entered at a separate prompt (“Enter hours:”, and so forth). The program should then
store the time in a variable of type struct time, and finally print out the total number of
seconds represented by this time value:
long totalsecs = t1.hours*3600 + t1.minutes*60 + t1.seconds*/
#include <iostream>
using namespace std;

struct time{
    int hours;
    int minutes;
    int seconds;
};

int main()
{
    char dummychar;
    time t1;

    cout << "Enter the time (hours:minutes:seconds): ";
    cin >> t1.hours >> dummychar >> t1.minutes >> dummychar >> t1.seconds;

    long totalsecs = t1.hours*3600 + t1.minutes*60 + t1.seconds;
    
    cout << "Total number of seconds represented by this time value is: " << totalsecs << endl;

    return 0;
}
