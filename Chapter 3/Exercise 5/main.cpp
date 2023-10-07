/*Use for loops to construct a program that displays a pyramid of Xs on the screen. The
pyramid should look like this
    X
   XXX
  XXXXX
 XXXXXXX
XXXXXXXXX
except that it should be 20 lines high, instead of the 5 lines shown here. One way to do
this is to nest two inner loops, one to print spaces and one to print Xs, inside an outer
loop that steps down the screen from line to line.*/
#include <iostream>
using namespace std;

int main()
{
    int i, j, k, c = 20;
    
    for(i = 1; i <= 20; i++){
        for(k = 1; k < c; k++){
            cout << " ";
        }

        for(j = 1; j <= (2 * i) - 1; j++){
            cout << "X";
        }

        cout << endl;

        c--;
    }
    return 0;
}
