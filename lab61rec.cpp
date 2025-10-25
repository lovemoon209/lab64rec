#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

const int N = 25;

void Create(int* p, int size, int Low, int High, int i = 0) {
    p[i] = Low + rand() % (High - Low + 1);
    if (i < size - 1)
        Create(p, size, Low, High, i + 1);
}

void Print(int* p, int size, int i = 0) {
    cout << setw(4) << p[i];
    if (i < size - 1)
        Print(p, size, i + 1);
    else
        cout << endl;
}

void Process(int* p, int size, int i, int& sum, int& k) {
    if (i >= size) return;
    if (!(p[i] % 2 == 0 && i % 13 == 0)) {
        sum += p[i];
        k++;
        p[i] = 0;
    }
    Process(p, size, i + 1, sum, k);
}

int main() {
    srand(time(0));
    int p[N];
    int Low = 15, High = 94;
    Create(p, N, Low, High);
    cout << "початковий масив: ";
    Print(p, N);
    int sum = 0, k = 0;
    Process(p, N, 0, sum, k);
    cout << "cума " << sum << endl;
    cout << "модифікований масив: ";
    Print(p, N);
    return 0;
}
