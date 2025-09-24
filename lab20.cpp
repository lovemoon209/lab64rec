// Lab_21.cpp
// Лунга Любов
// Лабораторна робота № 2.1
// Лінійні програми.
// Варіант 14

#include <iostream>
using namespace std;

// Define secant function
double sec(double x) {
    return 1 / cos(x);
}

int main() {
  double a;
  double z1;
  double z2;
  cout << "a = ";
  cin >> a;
  z1 = (cos(a) + sin(a)) / (cos(a) - sin(a));
  z2 = tan(2 * a) + sec(2 * a);
  cout << endl;
  cout << "z1 = " << z1 << endl;
  cout << "z2 = " << z2 << endl;
  return 0;
}
