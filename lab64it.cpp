#include <iostream>
#include <cmath>
using namespace std;

int countzeros(double* a, int n) {
    int count = 0;
    for (int i = 0; i < n; i++)
        if (a[i] == 0)
            count++;
    return count;
}

int findminindex(double* a, int n) {
    int minindex = 0;
    for (int i = 1; i < n; i++)
        if (a[i] < a[minindex])
            minindex = i;
    return minindex;
}

double sumaftermin(double* a, int n, int minindex) {
    double sum = 0;
    for (int i = minindex + 1; i < n; i++)
        sum += a[i];
    return sum;
}

void sortoddnes(double* a, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            bool odd1 = int(a[j]) % 2, odd2 = int(a[j + 1]) % 2;
            if (odd1 && odd2 && fabs(a[j]) > fabs(a[j + 1]))
                swap(a[j], a[j + 1]);
        }
    }
}

void print(double* a, int n) {
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

int main() {
    int n;
    cout << "n = ";
    cin >> n;

    double* a = new double[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Нулів: " << countzeros(a, n) << endl;
    int minidx = findminindex(a, n);
    cout << "Сума після мінімального: " << sumaftermin(a, n, minidx) << endl;

    sortoddnes(a, n);

    cout << "Масив після сортування: ";
    print(a, n);

    delete[] a;
    return 0;
}
