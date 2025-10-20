#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void K(const double x, const double eps, int &n, double &s); // 1 спосіб 
void F(const double x, const int n, double &a);

int main()  {
    double xp, xk, x, dx, eps, a, s=0;
    int n = 0;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "eps = "; cin >> eps;

    cout << fixed;
    cout << "-------------------------------------------------" << endl;
    cout << "|" << setw(7) << "x" << " |"
         << setw(12) << "cos(x)" << " |"
         << setw(12) << "s" << " |"
         << setw(9) << "n" << " |"
         << endl;
    cout << "-------------------------------------------------" << endl;
    x = xp;
    while (x <= xk) {
      K (x, eps, n, s);
      cout << "|" << setw(7) << setprecision(2) << x << " |" << setw(12)
           << setprecision(6) << cos(x) << " |" << setw(12) << setprecision(6)
           << s << " |" << setw(9) << n << " |" << endl;
      x += dx;
    }
    cout << "-------------------------------------------------" << endl;
    return 0;
}
void K(const double x, const double eps, int &n, double &s) {
    n = 0;
    double a = 1;
    s = a;
    do {
        n++;
        F(x, n, a);
        s += a;
    } while (fabs(a) >= eps);
}
void F(const double x, const int n, double &a) {
double R = (-1.0) *(x * x) / ((2 * n - 1) * (2 * n));
a *= R;
}
