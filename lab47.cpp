#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double xp, xk, x, dx, eps, a, R, S;
    int n;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "eps = "; cin >> eps;

    cout << fixed;
    cout << "-------------------------------------------------" << endl;
    cout << "|" << setw(7) << "x" << " |"
         << setw(12) << "cos(x)" << " |"
         << setw(12) << "S" << " |"
         << setw(9) << "n" << " |"
         << endl;
    cout << "-------------------------------------------------" << endl;

    for (x = xp; x <= xk; x += dx) {
        n = 0;
        a = 1;        
        S = a;

        do {
            n++;
            R = (-1.0) *(x * x) / ((2 * n - 1) * (2 * n));
            a *= R;
            S += a;
        } while (fabs(a) >= eps);

        cout << "|" << setw(7) << setprecision(2) << x << " |"
             << setw(12) << setprecision(6) << cos(x) << " |"
             << setw(12) << setprecision(6) << S << " |"
             << setw(9) << n << " |"
             << endl;
    }

    cout << "-------------------------------------------------" << endl;

    return 0;
}
