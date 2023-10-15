#include <iostream>
#include<iomanip>
using namespace std;

class fraction
{
    private:
        int numerator;
        int denominator;
        char o;

    public:
        void lowterms();

        void getfraction(int i, int s){
            numerator = i;
            denominator = s;
        }

        void fmul(fraction f2, fraction f1){

            numerator = (f1.numerator * f2.numerator);
            denominator =  (f1.denominator * f2.denominator);
        }

        void displayN(){
            cout << numerator << "/" << denominator;
        }

        void display(){
            cout << setw(7) << numerator << "/" << setw(2) << denominator;
        }
};

void fraction::lowterms()
{
    long tnum, tden, temp, gcd;
    tnum = labs(numerator);
    tden = labs(denominator);

    if(tden == 0){
        cout << "Illegal fraction: division by 0"; 
        exit(1); 
    }
    else if(tnum == 0){
        numerator = 0; 
        denominator = 1; 
        return; 
    }

    while(tnum != 0){
        if(tnum < tden){
            temp = tnum; 
            tnum = tden; 
            tden = temp; 
        }
        tnum = tnum - tden;
    }

    gcd = tden;
    numerator = numerator / gcd;
    denominator = denominator / gcd;
}

int main()
{
    fraction f, f1,f2;
    int x;
    char ch;

	cout << "Enter a number : ";
	cin >> x;
	cout << "   ";

    for(int i = 0; i < x - 1;){
        f.getfraction(++i, x);
        f.lowterms();
        f.display();
    }
    cout << endl << setfill('-') << setw(10 * x) << ' ' << setfill(' ');

    for(int j = 0; j < x - 1;){
        cout << endl;
        f.getfraction(++j, x);
        f.lowterms();
        f.displayN();

        for(int k = 0; k < x - 1;){
            f1.getfraction(++k, x);
            f2.getfraction(j, x);

            f.fmul(f1, f2);
            f.lowterms();
            f.display();
        }
    }

    return 0;
}
