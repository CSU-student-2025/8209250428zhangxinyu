#include <iostream>
#include <iomanip>
#include "mytemperature.h"
using namespace std;
int main()
{
    cout << "Celsius    Fahrenheit   |   Fahrenheit     Celsius\n";

    double fah = 120.0;
    for (int cel = 40; cel >= 31; --cel, fah -= 10.0)
    {
        double h = celsius_to_fah(static_cast<double>(cel));
        double z = fahrenheit_to_cels(fah);

        cout << fixed
                  << setprecision(1) << setw(6) << static_cast<double>(cel) << "       "
                  << setw(7) << h << "     |   "
                  << setw(8) << setprecision(1) << fah
                  << "         "
                  << setprecision(2) << z
                  << '\n';
    }

    return 0;
}