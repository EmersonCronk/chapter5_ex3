#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int speed;
    int hours;

    cout << "What is the speed of the vehicle in mph? ";
    cin >> speed;

    cout << "How many hours has it traveled? ";
    cin >> hours;

    cout << endl;
    cout << "Hour       Miles Traveled" << endl;
    cout << "-------------------------" << endl;

    for (int i = 1; i <= hours; i++)
    {
        cout << setw(4) << i
             << setw(17) << speed * i << endl;
    }

    return 0;
}