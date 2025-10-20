#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
double a, b, c, F, x, xp, xk, dx;
cout << "a = "; cin >> a;
cout << "b = "; cin >> b;
cout << "c = "; cin >> c;
cout << "xp = "; cin >> xp;
cout << "xk = "; cin >> xk;
cout << "dx = "; cin >> dx;
cout << fixed;
cout << "---------------------- " << endl;
cout << "|" << setw(7) << "x" << " |"
<< setw(10) << "F" << " |" << endl;
cout << "---------------------- " << endl;
x = xp;
while (x <= xk) {
if (x + c < 0 && a != 0)
  F = -a * x * x - b;
else if (x + c > 0 && a == 0)
  F = (x - a) / (x - c);
else
  F = x / c + c / x;
cout << "|" << setw(7) << setprecision(2) << x << " |" << setw(10)
     << setprecision(3) << F << " |" << endl;
cout << "---------------------- " << endl;
x += dx;
}
    cin.get();
    return 0;
    }