#include <iostream>
using namespace std;

class date
{
    private:
        int day;
        int month;
        int year;

    public:
        void getdate(){
        char split;
        cout << "Enter the date MM/DD/YYYY: ";
        cin >> month >> split >> day >> split >> year;
        }

        void showdate(){
            char split = '/';
            cout << "The date you entered is: " << month << split << day << split << year << endl;
        }
};
int main()
{
    date d1;

    d1.getdate();
    d1.showdate();

    return 0;
}
