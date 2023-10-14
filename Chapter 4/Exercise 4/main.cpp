/*4. Create a structure called employee that contains two members: an employee number
(type int) and the employee's compensation (in dollars; type float). Ask the user to fill
in this data for three employees, store it in three variables of type struct employee, and
then display the information for each employee.*/
#include <iostream>
using namespace std;

struct employee{
    int employnum;
    float employcomp;
};

int main()
{
    employee emp1, emp2, emp3;

    cout << "Enter employee number: ";
    cin >> emp1.employnum;
    cout << "Enter employee's compensation: ";
    cin >> emp1.employcomp;

    cout << "Enter another employee number: ";
    cin >> emp2.employnum;
    cout << "Enter employee's compensation: ";
    cin >> emp2.employcomp;

    cout << "Enter another employee number: ";
    cin >> emp3.employnum;
    cout << "Enter employee's compensation: ";
    cin >> emp3.employcomp;

    cout << "\nEmployee no. " << emp1.employnum << " Has compensation of "
        << emp1.employcomp << " dollars."<<endl;

    cout << "Employee no. " << emp2.employnum << " Has compensation of "
        << emp2.employcomp << " dollars."<<endl;

    cout << "Employee no. " << emp3.employnum << " Has compensation of "
        << emp3.employcomp << " dollars."<<endl;
        
    return 0;
}
