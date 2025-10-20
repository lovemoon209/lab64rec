#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double t(const double x);

int main() {
  double fp, fk, s;
  int n;

  cout << "fp = "; cin >> fp;
  cout << "fk = "; cin >> fk;
  cout << "n = "; cin >> n;

  double df = (fk - fp) / n;
  double f = fp;
  cout << fixed;
        cout << "------------------------" << endl;
    cout << "|" << setw(7) << "f" << " |"
         << setw(12) << "s" << " |" << endl;
        cout << "------------------------" << endl;

  while (f <= fk) {
    s = t(f * f) + 2 * t(2 * f + 1) + sqrt(t(1));
    cout << "|" << setw(7) << setprecision(2) << f << " |" << setw(12)
           << setprecision(6) << s << " |"  << endl;
    f += df;
  }
          cout << "------------------------" << endl;
  return 0;
}
double t(const double x) {
  if (abs(x) >= 1)
    return (cos(x) + 1) / (exp(x) + pow(sin(x),2));
  else {int j = 0;
    double S = 0, R;
    double a = x;
    S = a;
    do {
      j++;
      R = -x * x / ((2 * j) * (2 * j + 1));
      a *= R;
      S += a;
    } while (j < 5);
    return S;
  }
    }