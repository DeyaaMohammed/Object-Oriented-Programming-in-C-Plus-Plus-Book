/*11. Use the time structure from Exercise 9, and write a program that obtains two time values
from the user in 12:59:59 format, stores them in struct time variables, converts
each one to seconds (type int), adds these quantities, converts the result back to hoursminutes-
seconds, stores the result in a time structure, and finally displays the result in
12:59:59 format.*/
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
    time t1, t2, t3;

    cout << "Enter the first time (hours:minutes:seconds): ";
    cin >> t1.hours >> dummychar >> t1.minutes >> dummychar >> t1.seconds;
    cout << "Enter the second time (hours:minutes:seconds): ";
    cin >> t2.hours >> dummychar >> t2.minutes >> dummychar >> t2.seconds;

    int totalsecs = t1.hours * 3600 + t1.minutes*60 + t1.seconds + t2.hours * 3600 + t2.minutes * 60 + t2.seconds;
    t3.minutes = totalsecs / 60;
	t3.seconds = totalsecs % 60;
	t3.hours = t3.minutes / 60;
	t3.minutes  = t3.minutes % 60;

    cout << "The result of adding two times is: " << t3.hours << dummychar
    << t3.minutes << dummychar << t3.seconds << endl;

    return 0;
}
