#include <iostream>
#include <cmath>
using namespace std;

int countzeros(double* a, int n, int i = 0) {
    return (i == n) ? 0 : (a[i] == 0) + countzeros(a, n, i + 1);
}

int findminindex(double* a, int n, int i = 1, int minIndex = 0) {
    return (i == n) ? minIndex : findminindex(a, n, i + 1, (a[i] < a[minIndex]) ? i : minIndex);
}

double sumaftermin(double* a, int n, int minIndex, int i = 0) {
    return (i >= n) ? 0 : ((i > minIndex) ? a[i] : 0) + sumaftermin(a, n, minIndex, i + 1);
}

void sortoddnes(double* a, int n, int i = 0, int j = 0) {
    if (i >= n - 1) return;
    if (j < n - i - 1) {
        bool odd1 = int(a[j]) % 2, odd2 = int(a[j + 1]) % 2;
        if (odd1 && odd2 && fabs(a[j]) > fabs(a[j + 1])) swap(a[j], a[j + 1]);
        sortoddnes(a, n, i, j + 1);
    } else sortoddnes(a, n, i + 1, 0);
}

void print(double* a, int n, int i = 0) {
    if (i == n) return;
    cout << a[i] << " ";
    print(a, n, i + 1);
}

int main() {
    int n; cout << "n = "; cin >> n;
    double* a = new double[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    cout << "Нулів: " << countzeros(a, n) << endl;
    int minidx = findminindex(a, n);
    cout << "Сума після мінімального: " << sumaftermin(a, n, minidx) << endl;
    sortoddnes(a, n);
    cout << "Масив: "; print(a, n);
    delete[] a;
}
