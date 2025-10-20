#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double x, y, xp, xk, dx;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "-------------------" << endl;
    cout << "|" << setw(7) << "x" << " |"
         << setw(7) << "y" << " |" << endl;

    x = xp;
    while (x <= xk) {
        if (x <= -4) { 
            y = -2;
        } 
        else if (x <= 0 && x > -4) {
            y = -1 + (x + 4) / 4;
        } 
        else if (x <= 2 && x > 0) {
            y = 2 * x;
        } 
        else {
            y = (-x + 2) / 2 + 4;
        }

        cout << "|" << setw(7) << setprecision(1) << x
             << " |" << setw(7) << setprecision(3) << y << 
              " |" << endl;

        x += dx;
    }

    cout << "-------------------" << endl;

    return 0;
}
