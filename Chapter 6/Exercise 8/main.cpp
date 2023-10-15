#include <iostream>
using namespace std;

class Counter{
    private:
        int number;
        static int cnt;
        
    public:
        Counter(){
            cnt++;
            cout << "I am object Number " << cnt << endl;
        }
};

int Counter::cnt = 0;

int main()
{
    Counter c1;
    Counter c2;
    Counter c3;

    return 0;
}
