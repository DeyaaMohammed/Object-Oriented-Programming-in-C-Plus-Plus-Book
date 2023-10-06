/*By default, output is right-justified in its field. You can left-justify text output using the
manipulator setiosflags(ios::left). (For now, don't worry about what this new notation
means.) 
Use this manipulator, along with setw(), to help generate the following output:
Last name      First name     Street address    Town State
--------------------------------------------------------------
Jones          Bernard        109 Pine Lane     Littletown MI
O'Brian        Coleen         42 E. 99th Ave.   Bigcity NY
Wong           Harry          121-A Alabama St. Lakeville IL
*/
#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    cout << "Last name   First name    Street address      Town          State" << endl;
    cout << "-------------------------------------------------------------------" << endl;
    cout << setiosflags(ios::left)
       << setw(12) << "Jones" << setw(14) << "Bernard" << setw(20) << "109 Pine Lane"
       << setw(14) << "Littletown" << setw(6) << "MI" << endl;

    cout << setiosflags(ios::left)
       << setw(12) << "O'Brian" << setw(14) << "Coleen" << setw(20) << "42 E. 99th Ave."
       << setw(14) << "Bigcity" << setw(6) << "NY" << endl;

    cout << setiosflags(ios::left)
       << setw(12) << "Wong"<< setw(14) << "Harry" << setw(20) << "121-A Alabama St."
       << setw(14) << "Lakeville" << setw(6) << "IL" << endl;
    return 0;
}
