#include <iomanip>
#include <iostream>
#include "math.h"
using namespace std;

int main()
{
    int min, max;
    float y, x, h;
    cout << "Enter [min], [max], h" << endl;
    cin >> min >> max >> h;
    cout << "while" << endl;
    x = min;
    cout << "\t x" << "\t Y(x)" << endl;
    while (x <= max + h / 2)
    {
     y = cos(x) * cos(x) + log(x) + 2;
     cout << setw(7) << x << setw(7) << setprecision(3) << y << endl;
     x += h;
    }

    cout << "do....while" << endl;
    x = min;
    cout << "\t x" << "\t Y(x)" << endl;
    do
    {
     y = cos(x) * cos(x) + log(x) + 2;
     cout << setw(7) << x << setw(7) << setprecision(3) << y << endl;
     x += h;
    } while (x <= max + h / 2);

//comment
}




