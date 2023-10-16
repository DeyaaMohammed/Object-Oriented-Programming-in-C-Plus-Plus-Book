#include <iostream>
#include <string>
using namespace std;

class employee{
    private:
        string name;
        long number;

    public:
        void getdata(){
            cout << "\nEnter name: "; 
            cin >> name;

            cout << "Enter number: "; 
            cin >> number;
        }

        void putdata(){
            cout << "\n Name: " << name;
            cout << "\n Number: " << number;
        }
};

int main()
{
    employee emparr[100];
    int n = 0;
    char ch;

    do{
        cout << "\nEnter data for employee number " << n+1;
        emparr[n++].getdata();

        cout << "Enter another (y/n)? ";
        cin >> ch;
    } while(ch != 'n');

    for(int j = 0; j < n; j++){
        cout << "\nEmployee number " << j + 1;
        emparr[j].putdata();
    }
    cout << endl;

    return 0;
}
