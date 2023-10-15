#include <iostream>
using namespace std;

class ship
{
    private:
        int degrees;
        float minutes;
        char direction;
        static int cnt;
        int number;

    public:
        void getdata(){
            cout << "\nEnter degree: ";
		    cin >> degrees;

		    cout << "Enter minutes: ";
		    cin >> minutes;

		    cout << "Enter direction(N, S, E, W): ";
		    cin >> direction;

            number = ++cnt;
        }

        void display(){
            cout << "Ship Number " << number <<": " ;
            cout << "Angle: " << degrees << "\xF8 " << minutes << "\' " << direction;

            if(direction == 'E' || direction == 'e' || direction == 'W' || direction == 'w'){
		        cout << " Longitude !"<<endl;
            }

	        if(direction == 'N' || direction == 'n' || direction == 'S' || direction == 's'){
		        cout << " Latitude !"<<endl;
	        }
        }
};

int ship::cnt = 0;

int main()
{
    ship sh1, sh2, sh3;

    sh1.getdata();
    sh2.getdata();
    sh3.getdata();

    sh1.display();
    sh2.display();
    sh3.display();

    return 0;
}
