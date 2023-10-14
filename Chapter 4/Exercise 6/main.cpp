/*6. We said earlier that C++ I/O statements don't automatically understand the data types of
enumerations. Instead, the (>>) and (<<) operators think of such variables simply as integers.
You can overcome this limitation by using switch statements to translate between
the user's way of expressing an enumerated variable and the actual values of the enumerated
variable. For example, imagine an enumerated type with values that indicate an
employee type within an organization:
enum etype { laborer, secretary, manager, accountant, executive,
researcher };
Write a program that first allows the user to specify a type by entering its first letter
('l', 's', 'm', and so on), then stores the type chosen as a value of a variable of type
enum etype, and finally displays the complete word for this type.*/
#include <iostream>
enum etype {laborer, secretary, manager, accountant, executive, researcher};
using namespace std;

int main()
{
    etype emp;
    char ch;

    cout << "Enter employee type (first letter only) "
    <<"laborer, secretary, manager,accountant, executive, researcher): ";
    cin >> ch;

    switch(ch){
        case('l'):
            emp = laborer;
            break;

        case('s'):
            emp = secretary;
            break;

        case('m'):
            emp = manager;
            break;

        case('a'):
            emp = accountant;
            break;

        case('e'):
            emp = executive;
            break;

        case('r'):
            emp = researcher;
            break;

        default:
            cout << "Enter a valid input" <<endl;
    }

    switch(emp){
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
    }

    return 0;
}
