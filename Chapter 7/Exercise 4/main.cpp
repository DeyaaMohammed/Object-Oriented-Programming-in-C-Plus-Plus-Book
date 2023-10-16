#include <iostream>
using namespace std;

int maxint(int num[], int sz){
    int maxin = 0;
    int maxindex = 0;

    for(int j = 0 ; j < sz; j++){
        if(num[j] > maxin){
            maxin = num[j];
            maxindex = j;
        }
        else
            continue;
    }

    return maxindex;
}

int main()
{
    int SIZE ;
    cout << "How many numbers will be entered? ";
    cin >> SIZE;
    cout << endl;
    int sales[SIZE];
    cout << "Enter " << SIZE << " numbers:\n";
    for(int j = 0; j < SIZE; j++)
        cin >> sales[j];

    cout << "Maximum is: " << sales[maxint(sales, SIZE)] << endl;
}
