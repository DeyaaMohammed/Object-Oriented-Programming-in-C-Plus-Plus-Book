#include <iostream>
using namespace std;

class fraction
{
    private:
        int numerator;
        int denominator;
        
    public:
        void getfraction(){
            char dummychar;
            cout << "Enter fraction: ";
            cin >> numerator >> dummychar >> denominator;
        }

        void addfraction(fraction f2){
            char dummychar = '/';
            fraction f3;
            f3.numerator = numerator * f2.denominator + f2.numerator * denominator;
            f3.denominator = denominator * f2.denominator;
            cout << "Answer is: " << f3.numerator << dummychar << f3.denominator << endl;
        }
};

int main()
{

    fraction f4, f5;
    char ans;

    do{
    f4.getfraction();
    f5.getfraction();
    f4.addfraction(f5);

    cout<<"Want to continue(Y or N): ";
    cin>>ans;
    }while(ans == 'y' || ans =='Y');

    return 0;
}
