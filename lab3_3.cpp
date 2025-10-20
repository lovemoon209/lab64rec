// Lab3_3.cpp
// Лунга Любов
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 14
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, y;
    cout << "x = ";
    cin >> x;

    if (x <= -4) { 
        y = -2;
    } else if (x <= 0 && x > -4) {
        y = -1 + (x + 4) / 4;
    } else if (x <= 2 && x > 0) {
        y = 2 * x;
    } else {
        y = (-x + 2) / 2 + 4;
    }
cout << "y = " << y << endl;
    cin.get();
    return 0;
}
