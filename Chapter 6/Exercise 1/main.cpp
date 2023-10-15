/**1. Create a class that imitates part of the functionality of the basic data type int. Call the
class Int (note different capitalization). The only data in this class is an int variable.
Include member functions to initialize an Int to 0, to initialize it to an int value, to display
it (it looks just like an int), and to add two Int values.
Write a program that exercises this class by creating one uninitialized and two initialized
Int values, adding the two initialized values and placing the response in the uninitialized
value, and then displaying this result.*/
#include <iostream>
using namespace std;

class Int
{
    private:
        int i;
        
    public:
        Int(){
            i = 0;
        }
        Int(int ii){
            i = ii;
        }

        void add(Int i1, Int i2){
            i = i1.i + i2.i;
        }

        void display(){
            cout << i;
        }
};

int main()
{
    Int Int1(7);
    Int Int2(11);
    Int Int3;

    Int3.add(Int1, Int2);

    cout << "\nInt3 = "; Int3.display();
    cout << endl;

    return 0;
}
