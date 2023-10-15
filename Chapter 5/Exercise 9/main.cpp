/*9. Repeat Exercise 8, but instead of two int variables, have the swap() function interchange
two struct time values (see Exercise 6).*/
#include <iostream>
using namespace std;

struct time{
    int hours;
    int minutes;
    int seconds;
};

void swaps(time&, time&);

int main()
{
    time t1, t2;
    char dummychar;

    cout << "Enter the first time (hours:minutes:seconds): ";
    cin >> t1.hours >> dummychar >> t1.minutes >> dummychar >> t1.seconds;
    
    cout << "Enter the second time (hours:minutes:seconds): ";
    cin >> t2.hours >> dummychar >> t2.minutes >> dummychar >> t2.seconds;

    swaps(t1, t2);

    cout << "Time 1 after swapping: " << t1.hours << dummychar << t1.minutes << dummychar << t1.seconds << "." << endl;
    cout << "Time 2 after swapping: " << t2.hours << dummychar << t2.minutes << dummychar << t2.seconds << "." << endl;

    return 0;
}

void swaps(time& time1, time& time2){
    time time3 = time1;
    time1 = time2;
    time2 = time3;
}
