// Lab_3.1.cpp
// Лунга Любов
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 14

#include <iostream>
#include <cmath>
using namespace std;
int main() {
  double x; //зміннаclang++ Lab_3.1.cpp -o Lab_3.1

  
  double y; //результат
  double A; // перший вираз
  double B; // другий вираз

  std::cout << "x = ";
  std::cin >> x;

  // 1 спосіб
  A = abs(4 * x - 1);
  if (x < 0)
    B = pow(x, 7) - 2 * x;
  else if (x >= 0 && x < 3)
    B = (atan((exp(x) + 1) / 8));
  else if (x >= 3)
    B = (pow(x, 4) + exp(pow(x, 3) + 3));
  y = A + B;
  cout << " B = " << B << endl;
  cout << " A = " << A << endl;
  cout << "y = " << y << std::endl;

  // 2 спосіб
  if (x < 0) {
      B = pow(x, 7) - 2 * x;

  }
  
  if (x >= 0 && x < 3) {  B = (atan((exp(x) + 1) / 8));
}

if (x >= 3) {
      B = (pow(x, 4) + exp(pow(x, 3) + 3));

  }
  y = A + B;

  cout << " B = " << B << endl;
  cout << " A = " << A << endl;
  cout << "y = " << y << std::endl;
  cin.get();
    return 0;
}