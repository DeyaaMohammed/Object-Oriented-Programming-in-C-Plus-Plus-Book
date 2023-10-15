#include <iostream>
using namespace std;

class angle
{
    private:
        int degrees;
        float minutes;
        char direction;

    public:
        angle(){
            degrees = 0;
            minutes = 0;
            direction = '0';
        }
        angle(int degree, float minute, char directions){
            degrees = degree;
            minutes = minute;
            direction = directions;
        }

        void getdata(int dg, float mins, char dir){
            degrees = dg;
            minutes = mins;
            direction = dir;
        }

        void display(){
            cout << "Angle: " << degrees << "\xF8 " << minutes << "\' " << direction;

            if(direction == 'E' || direction == 'e' || direction == 'W' || direction == 'w'){
		        cout << " Longitude !";
            }

	        if(direction == 'N' || direction == 'n' || direction == 'S' || direction == 's'){
		        cout << " Latitude !";
	        }
        }
};

int main()
{
    int dig;
	float mints;
	char dir, yorn;

	cout << endl;
	angle ang1(120, 40, 'E');
	ang1.display();
	cout << endl;

	angle ang2;

	do {
		cout << "\nEnter degree: ";
		cin >> dig;

		cout << "Enter minutes: ";
		cin >> mints;

		cout << "Enter direction(N, S, E, W): ";
		cin >> dir;

		ang2.getdata(dig, mints, dir);
		ang2.display();

		cout << "\nDo you want to enter another angle for navigation (Y, N): ";
		cin >> yorn;
	} while(yorn == 'Y' || yorn == 'y' );
	cout << endl;

    return 0;
}
