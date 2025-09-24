// Lab_03_2.cpp_
// Лунга Любов
// Лабораторна робота № 3.2
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 14

#include <iostream>
using namespace std;
int main() {
  double a;
  double b;
  double c;
  double x;
  double F;
  double F1;
  double F2;
  double F3;
  cout << a << " a = ";
  cin >> a;
cout << b << " b = ";
  cin >> b;
cout << c << " c = ";
cin >> c;
cout << c << " c = ";
cin >> c;
cout << x << " x = ";
cin >> x;
if (x + c < 0 && a != 0)
  F1 = -a * x * x - b;
else if (x + c > 0 && a == 0)
  F2 = (x - a) / (x - c);
else
  F3 = x / c + c / x;
cout << " F1 = " << F1 << endl;
cout << " F2 = " << F2 << endl;
cout << " F3 = " << F3 << endl;
cout << " F = " << F << endl;
cin.get();
      return 0;
}
