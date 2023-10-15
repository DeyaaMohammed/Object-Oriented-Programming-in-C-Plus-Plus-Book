#include <iostream>
using namespace std;

enum etype {laborer, secretary, manager, accountant, executive, researcher};

class employee
{
    private:
        int employnum;
        float employcomp;
        etype ty;
        int month;
        int year;
        int day;
        
    public:
        void getemploy(){
            char split;

            cout << "Enter employee number: ";
            cin >> employnum;
            
            cout << "Enter employee's compensation: ";
            cin >> employcomp;

            cout << "Enter the date of first employment MM/DD/YYYY: ";
            cin >> month >> split >> day >> split >> year;

            char ch;
            cout << "Enter employee type (first letter only) " <<"laborer, secretary, manager,accountant, executive, researcher): ";
            cin >> ch;

            switch(ch)
            {
                case('l'):
                    ty = laborer;
                    break;

                case('s'):
                    ty = secretary;
                    break;

                case('m'):
                    ty = manager;
                    break;

                case('a'):
                    ty = accountant;
                    break;

                case('e'):
                    ty = executive;
                    break;

                case('r'):
                    ty = researcher;
                    break;

                default:
                    cout << "Enter a valid input" <<endl;
            }
        }

        void putemploy(){
            char split = '/';

            cout << "\nEmployee no. " << employnum << " Has compensation of " << employcomp << " dollars." << endl;
            cout << "The date of first employment: " << month << split << day << split << year << '.' << endl;

            switch(ty){
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

                case(executive):
                    cout << "Employee type is an executive.";
                    break;

                case(researcher):
                    cout << "Employee type is a researcher.";
                    break;
            }
        }
};

int main()
{
    employee emp1, emp2,emp3;

    emp1.getemploy();
    emp2.getemploy();
    emp3.getemploy();

    emp1.putemploy();
    emp2.putemploy();
    emp3.putemploy();

    return 0;
}
