/*Add a variable of type enum etype (see Exercise 6), and another variable of type struct
date (see Exercise 5) to the employee class of Exercise 4. Organize the resulting program
so that the user enters four items of information for each of three employees: an
employee number, the employee's compensation, the employee type, and the date of first
employment. The program should store this information in three variables of type
employee, and then display their contents.*/
#include <iostream>
using namespace std;

enum etype {laborer, secretary, manager, accountant, executive, researcher};

struct date{
    int day;
    int month;
    int year;
};

struct employee{
    int employnum;
    float employcomp;
    etype ty;
    date d;
};

int main()
{
    char split;
    employee emp1, emp2, emp3;

    cout << "Enter employee number: ";
    cin >> emp1.employnum;

    cout << "Enter employee's compensation: ";
    cin >> emp1.employcomp;

    cout << "Enter the date of first employment MM/DD/YYYY: ";
    cin >> emp1.d.month >> split >> emp1.d.day >> split >> emp1.d.year;

    char ch;
    cout << "Enter employee type (first letter only) "
    <<"laborer, secretary, manager,accountant, executive, researcher): ";
    cin >> ch;

    switch(ch){
        case('l'):
            emp1.ty = laborer;
            break;

        case('s'):
            emp1.ty = secretary;
            break;

        case('m'):
            emp1.ty = manager;
            break;

        case('a'):
            emp1.ty = accountant;
            break;

        case('e'):
            emp1.ty = executive;
            break;

        case('r'):
            emp1.ty = researcher;
            break;

        default:
            cout << "Enter a valid input" <<endl;
    }

    cout << "Enter another employee number: ";
    cin >> emp2.employnum;

    cout << "Enter employee's compensation: ";
    cin >> emp2.employcomp;

    cout << "Enter the date of first employment MM/DD/YYYY: ";
    cin >> emp2.d.month >> split >> emp2.d.day >> split >> emp2.d.year;

    char ch2;
    cout << "Enter employee type (first letter only) "
    <<"laborer, secretary, manager,accountant, executive, researcher): ";
    cin >> ch2;

    switch(ch2)
    {
    case('l'):
        emp2.ty = laborer;
        break;
    case('s'):
        emp2.ty = secretary;
        break;
    case('m'):
        emp2.ty = manager;
        break;
    case('a'):
        emp2.ty = accountant;
    case('e'):
        emp2.ty = executive;
        break;
    case('r'):
        emp2.ty = researcher;
        break;
    default:
        cout << "Enter a valid input" <<endl;
    }


    cout << "Enter another employee number: ";
    cin >> emp3.employnum;
    cout << "Enter employee's compensation: ";
    cin >> emp3.employcomp;
    cout << "Enter the date of first employment MM/DD/YYYY: ";
    cin >> emp3.d.month >> split >> emp3.d.day >> split >> emp3.d.year;

     char ch3;
    cout << "Enter employee type (first letter only) "
    <<"laborer, secretary, manager,accountant, executive, researcher): ";
    cin >> ch3;
    switch(ch3){
        case('l'):
            emp3.ty = laborer;
            break;

        case('s'):
            emp3.ty = secretary;
            break;

        case('m'):
            emp3.ty = manager;
            break;

        case('a'):
            emp3.ty = accountant;
            break;

        case('e'):
            emp3.ty = executive;
            break;

        case('r'):
            emp3.ty = researcher;
            break;

        default:
            cout << "Enter a valid input" <<endl;
    }

        cout << "\nEmployee no. " << emp1.employnum << " Has compensation of "
            << emp1.employcomp << " dollars."<<endl;
            cout << "The date of first employment: " << emp1.d.month << split << emp1.d.day
        << split << emp1.d.year << '.' << endl;

        switch(emp1.ty){
            case(laborer):
                cout << "Employee type is a laborer.";
                break;

            case(secretary):
                cout << "Employee type is a secretary.";
                break;

            case(manager):
                cout << "Employee type is a manager.";
                break;

            case(accountant):
                cout << "Employee type is an accountant.";
                break;

            case (executive):
                cout << "Employee type is an executive.";
                break;

            case(researcher):
                cout << "Employee type is a researcher.";
                break;
    }

        cout << "Employee no. " << emp2.employnum << " Has compensation of "
        << emp2.employcomp << " dollars."<<endl;
        cout << "The date of first employment: " << emp2.d.month << split << emp2.d.day
        << split << emp2.d.year << '.' << endl;

        switch(emp2.ty){
            case(laborer):
                cout << "Employee type is laborer.";
                break;

            case(secretary):
                cout << "Employee type is secretary.";
                break;

            case(manager):
                cout << "Employee type is manager.";
                break;

            case(accountant):
                cout << "Employee type is accountant.";
                break;

            case (executive):
                cout << "Employee type is executive.";
                break;

            case(researcher):
                cout << "Employee type is researcher.";
                break;

    }

        cout << "Employee no. " << emp3.employnum << " Has compensation of "
        << emp3.employcomp << " dollars."<<endl;
        cout << "The date of first employment: " << emp3.d.month << split << emp3.d.day
        << split << emp3.d.year << '.' << endl;

        switch(emp3.ty){
            case(laborer):
                cout << "Employee type is laborer.";
                break;

            case(secretary):
                cout << "Employee type is secretary.";
                break;

            case(manager):
                cout << "Employee type is manager.";
                break;

            case(accountant):
                cout << "Employee type is accountant.";
                break;

            case (executive):
                cout << "Employee type is executive.";
                break;
                
            case(researcher):
                cout << "Employee type is researcher.";
                break;
    }

    return 0;
}
