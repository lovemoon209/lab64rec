#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

int main() {
    double x, y, r1, r2;
    srand((unsigned) time(NULL));

    for (int i = 0; i < 10; i++) {
        cout << "x = "; cin >> x;
        cout << "y = "; cin >> y;
        cout << "r1 = "; cin >> r1;
        cout << "r2 = "; cin >> r2;

        if ( ((x >= 0 && y >= 0 && (x * x + y * y) <= r1 * r1) &&
              (x * x + y * y >= r2 * r2))
           || (x <= 0 && y <= 0 && (x * x + y * y) >= r2 * r2 && 
           (x * x + y * y) <= r1 * r1) ) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
        cout << endl << fixed;
    }

    for (int i = 0; i < 10; i++) {
       x = 200.0 * rand() / RAND_MAX - 100;
y = 200.0 * rand() / RAND_MAX - 100;

        if ( ((x >= 0 && y >= 0 && (x * x + y * y) <= r1 * r1) &&
              (x * x + y * y >= r2 * r2))
           || (x <= 0 && y <= 0 && (x * x + y * y) >= r2 * r2 && (x * x + y * y) <= r1 * r1) ) {
            cout << setw(8) << setprecision(4) << x << " "
                 << setw(8) << setprecision(4) << y << " " << "yes" << endl;
        } else {
            cout << setw(8) << setprecision(4) << x << " "
                 << setw(8) << setprecision(4) << y << " " << "no" << endl;
        }
    }

    return 0;
}
