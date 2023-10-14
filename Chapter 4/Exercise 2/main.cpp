/**2. A point on the two-dimensional plane can be represented by two numbers: an x coordinate
and a y coordinate. For example, (4,5) represents a point 4 units to the right of the
vertical axis, and 5 units up from the horizontal axis. The sum of two points can be
defined as a new point whose x coordinate is the sum of the x coordinates of the two
points, and whose y coordinate is the sum of the y coordinates.
Write a program that uses a structure called point to model a point. Define three points,
and have the user input values to two of them. Then set the third point equal to the sum
of the other two, and display the value of the new point. Interaction with the program
might look like this:
Enter coordinates for p1: 3 4
Enter coordinates for p2: 5 7
Coordinates of p1+p2 are: 8, 11*/
#include <iostream>
using namespace std;

struct point{
    int xco;
    int yco;
};

int main()
{
    point p1, p2, p3;
    cout << "Enter coordinates for p1: ";
    cin >> p1.xco >> p1.yco;

    cout << "\nEnter coordinates for p2: ";
    cin >> p2.xco >> p2.yco;

    p3.xco = p1.xco + p2.xco;
    p3.yco = p1.yco + p2.yco;

    cout << "Coordinates of p1+p2 are: " << p3.xco << ", " << p3.yco << endl;
    
    return 0;
}
