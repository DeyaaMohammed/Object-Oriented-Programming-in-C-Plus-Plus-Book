/*5. Write a function called hms_to_secs() that takes three int values - for hours, minutes,
and seconds - as arguments, and returns the equivalent time in seconds (type long).
Create a program that exercises this function by repeatedly obtaining a time value in
hours, minutes, and seconds from the user (format 12:59:59), calling the function, and
displaying the value of seconds it returns.*/
#include <iostream>
using namespace std;

long hms_to_secs(int hrs, int minute, int secs);

int main()
{
    int hours, minutes, seconds;
    char dummychar;
    
    cout << "Enter the time (hours:minutes:seconds): ";
    cin >> hours >> dummychar >> minutes >> dummychar >> seconds;

    long totalsecs = hms_to_secs(hours, minutes, seconds);

    cout << "Total number of seconds represented by this time value is: " << totalsecs << endl;

    return 0;
}

long hms_to_secs(int h, int m, int s){
    return(h * 3600 + m * 60 + s);
}
