#include <iostream>
using namespace std;

class employee
{
    private:
        int employnum;
        float employcomp;

    public:
        void getdata(){
        cout << "Enter employee number: ";
        cin >> employnum;
        
        cout << "Enter employee's compensation: ";
        cin >> employcomp;
        }

        void display(){
            cout << "\nEmployee no. " << employnum << " Has compensation of " << employcomp << " dollars." << endl;

        }
};

int main()
{
    employee emp1, emp2,emp3;

    emp1.getdata();
    emp2.getdata();
    emp3.getdata();

    emp1.display();
    emp2.display();
    emp3.display();
}
