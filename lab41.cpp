#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    cout << "N = ";
    cin >> N;

    double result1 = 1.0, result2 = 1.0, result3 = 1.0, result4 = 1.0;

    // 1 спосіб 
    int i = N;
    while (i <= 10) {
        result1 *= (i + 1.0 / (i * i)) / pow(1.0 + exp(i), 1.0 / i);
        i++;
    }
    cout << "result1 = " << (int)result1 << endl;

    // 2 спосіб 
    i = N;
    if (i <= 10) {
        do {
            result2 *= (i + 1.0 / (i * i)) / pow(1.0 + exp(i), 1.0 / i);
            i++;
        } while (i <= 10);
    }
    cout << "result2 = " << (int)result2 << endl;

    // 3 спосіб 
    for (int i = N; i <= 10; i++) {
        result3 *= (i + 1.0 / (i * i)) / pow(1.0 + exp(i), 1.0 / i);
    }
    cout << "result3 = " << (int)result3 << endl;

    // 4 спосіб 
    for (int i = 10; i >= N; i--) {
        result4 *= (i + 1.0 / (i * i)) / pow(1.0 + exp(i), 1.0 / i);
    }
    cout << "result4 = " << result4 << endl;

    return 0;
}
