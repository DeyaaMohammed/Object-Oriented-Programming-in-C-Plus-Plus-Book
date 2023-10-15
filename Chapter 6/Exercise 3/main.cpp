#include <iostream>
using namespace std;

class time
{
    private:
        int hours;
        int minutes;
        int seconds;

    public:
        time(){
            hours = 0;
            minutes = 0;
            seconds = 0;
        }
        time(int h, int m, int s){
            hours = h;
            minutes = m;
            seconds = s;
        }

        void display(){
            cout << hours << ':' << minutes << ':' << seconds << endl;
        }

        void add_time(time t1, time t2){
            seconds = t1.seconds + t2.seconds;
            if(seconds > 59){
                seconds -= 60; minutes++; 
            }

            minutes += t1.minutes + t2.minutes;
            if( minutes > 59 ){
                minutes -= 60; hours++; 
            }

            hours += t1.hours + t2.hours;
        }
};

int main()
{
    const time time1(5, 59, 59);
    const time time2(4, 30, 30);
    time time3;

    time3.add_time(time1, time2);

    cout << "time3 = ";
    time3.display();
    cout << endl;

    return 0;
}
