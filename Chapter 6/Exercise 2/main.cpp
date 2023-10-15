/**2. Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a 50 cent
toll. Mostly they do, but sometimes a car goes by without paying. The tollbooth keeps
track of the number of cars that have gone by, and of the total amount of money collected.Model this tollbooth with a class called tollBooth. The two data items are a type
unsigned int to hold the total number of cars, and a type double to hold the total amount
of money collected. A constructor initializes both of these to 0. A member function called
payingCar() increments the car total and adds 0.50 to the cash total. Another function,
called nopayCar(), increments the car total but adds nothing to the cash total. Finally, a
member function called display() displays the two totals. Make appropriate member
functions const.
Include a program to test this class. This program should allow the user to push one key
to count a paying car, and another to count a nonpaying car. Pushing the Esc key should
cause the program to print out the total cars and total cash and then exit.*/
#include <iostream>
#include <conio.h>
using namespace std;
 
class tollBooth
{
    private:
        unsigned int totalcars;
        double totalamount;

    public:
        tollBooth(){
            totalcars = 0;
            totalamount = 0;
        }

        void payingCar(){
            totalcars += 1;
            totalamount += 0.50;
        }

        void nopayCar(){
            totalcars += 1;
        }

        void display(){
            cout<<"\nCars = " << totalcars << endl;
            cout<<"Cash = " << totalamount << endl;
        }

};

int main()
{
    tollBooth booth1;
    char ch;
    cout << "\nPress 0 for each non-paying car," << "\n 1 for each paying car,"
    << "\n Esc to exit the program.\n";

    do {
        ch = getche();

        if( ch == '0' ) 
            booth1.nopayCar();
        if( ch == '1' )
            booth1.payingCar();
    } while( ch != 27 );
    
    booth1.display();

    return 0;
}
