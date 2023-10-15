#include <iostream>
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

        fraction fadd(fraction f2){
            fraction f3;
            f3.numerator = (numerator * f2.denominator + denominator * f2.numerator);
            f3.denominator =  (denominator * f2.denominator);
            f3.o = '/';
            return f3;
        }

        fraction fsub(fraction f2){
            fraction f3;
            f3.numerator = (numerator * f2.denominator - denominator * f2.numerator);
            f3.denominator =  (denominator * f2.denominator);
            f3.o = '/';
            return f3;
        }

        fraction fmul(fraction f2){
            fraction f3;
            f3.numerator = (numerator * f2.numerator);
            f3.denominator =  (denominator * f2.denominator);
            f3.o = '/';
            return f3;
        }

        fraction fdiv(fraction f2){
            fraction f3;
            f3.numerator = (numerator * f2.denominator);
            f3.denominator =  (denominator * f2.numerator);
            f3.o = '/';
            return f3;
        }

        void display(){
            cout << "Answer = " << numerator << o << denominator << endl;
        }
};

void fraction::lowterms(){
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
    fraction ff1, ff2,ff3;
    int n1, d1, n2 ,d2;
    char oper, ch, o;

    do {
        cout << "Enter first fraction, an operator and a second fraction: ";
        cin >> n1 >> o >> d1 >> oper >> n2 >> o >> d2;

        ff1.getfraction(n1, d1);
        ff2.getfraction(n2, d2);

        switch(oper)
        {
            case '+':
                ff3 =  ff1.fadd(ff2);
                 break;

            case '-':
                ff3 =   ff1.fsub(ff2);
                break;

            case '*':
                ff3 = ff1.fmul(ff2);
                break;

            case '/':
                ff3 =  ff1.fdiv(ff2);
                break;

            default: 
                ff1.getfraction(0,0);
        }

        ff3.display();
        cout << "\nLoswest terms of fraction is: ";
        ff3.lowterms();
        ff3.display();

        cout << "\nDo another (Enter 'y' or 'n')? ";
        cin >> ch;
    } while( ch != 'n' );

    return 0;
}
