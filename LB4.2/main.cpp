#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double x, xp, xk, dx, A, B, y;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << fixed;
    cout << "----------------------" << endl;
    cout << "|" << setw(5) << "x" << setw(4) << " |"
        << setw(7) << "y" << setw(5) << " |" << endl;
    cout << "----------------------" << endl;
    x = xp;
    while (x <= xk)
    {
        A = 4.95 * pow(x, 2);
        if (x < -3.5)
            B = 4 + pow(x, -2);
        else
            if (x >= 1)
                B = sin(3 * x) - cos(x);
            else
                B = tan(3.5 + x) / 5;
        y = A + B;
        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << y
            << " |" << endl;
        x += dx;
    }
    cout << "----------------------" << endl;
    return 0;
}
