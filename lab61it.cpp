#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

const int N = 25;

void Create(int* p, int size, int Low, int High, int i = 0) {
   for(int i = 0; i < size; i++) 
    p[i] = Low + rand() % (High - Low + 1);
}

void Print(int* p, int size, int i = 0) {
   for(int i = 0; i < size; i++) 
    cout << setw(4) << p[i];
}

void Process(int* p, int size, int i, int& s, int& k) {
    for (int i = 0; (!(p[i] % 2 == 0 && i % 13 == 0)) && i < size; i++) 
        s += p[i];
        k++;
        p[i] = 0;
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
    cout << "\ncума " << sum << endl;
    cout << "модифікований масив: ";
    Print(p, N);
    return 0;
}
