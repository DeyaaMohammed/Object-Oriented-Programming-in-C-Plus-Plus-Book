/*6. Start with the program from Exercise 11 in Chapter 4, "Structures," which adds two
struct time values. Keep the same functionality, but modify the program so that it uses
two functions. The first, time_to_secs(), takes as its only argument a structure of type time,
and returns the equivalent in seconds (type long). The second function,
secs_to_time(), takes as its only argument a time in seconds (type long), and returns a
structure of type time.*/
#include <iostream>
using namespace std;

struct time{
    int hours;
    int minutes;
    int seconds;
};

long time_to_secs(time t);
time secs_to_time(long seconds);

int main()
{
    char dummychar;
    time t1, t2, t3;
    cout << "Enter the first time (hours:minutes:seconds): ";
    cin >> t1.hours >> dummychar >> t1.minutes >> dummychar >> t1.seconds;

    cout << "Enter the second time (hours:minutes:seconds): ";
    cin >> t2.hours >> dummychar >> t2.minutes >> dummychar >> t2.seconds;

    long totalsecs = time_to_secs(t1) + time_to_secs(t2);
    t3 = secs_to_time(totalsecs);

    cout << "The result of adding two times is: " << t3.hours << dummychar
    << t3.minutes << dummychar << t3.seconds << endl;

    return 0;
}

long time_to_secs(time tnode){
    return(tnode.hours * 3600 + tnode.minutes * 60 + tnode.seconds);
}

time secs_to_time(long secs){
    time tr;
    tr.minutes = secs / 60;
	tr.seconds = secs % 60;
	tr.hours = tr.minutes  / 60;
	tr.minutes  = tr.minutes  % 60;
	return(tr);
}
