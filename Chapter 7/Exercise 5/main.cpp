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
            cout << numerator << o << denominator << endl;
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
    int sz,num1,den1;
    char o;

    cout << "How many fractions will be added? ";
    cin >> sz;

    cout << endl;
    fraction fr[sz];
    for(int i = 0; i < sz; i++){
        cout << "\n" << i+1 << ": ";
        cin >> num1 >> o >> den1;
        fr[i].getfraction(num1, den1);
    }

    fraction total;
    total.getfraction(0, 1);
    for(int j = 0; j < sz; j++){
        total = total.fadd(fr[j]);
        total.lowterms();
    }

    fraction SIZE;
    SIZE.getfraction(sz, 1);
    fraction avg;
    avg = total.fdiv(SIZE);

    cout << "Averege is: ";
    avg.display();

    return 0;

}
