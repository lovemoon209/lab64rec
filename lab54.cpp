#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double P0(const int N) { // на спуску спадає
  double P = 1;
  for (int i = N; i <= 10; i++)
    P *= (i + 1.0 / (i * i)) / pow(1.0 + exp(i), 1.0 / i);
  return P;
    }

    double P1(const int N, const int i) // на спуску зростає 
        {
    if (i > 10)
        return 1;
    else
        return (i + 1.0 / (i * i)) / pow(1.0 + exp(i), 1.0 / i) * P1(N, i + 1);
}

double P2(const int N, const int i)// на підйомі спадає
{
    if (i < N)
        return 1;
    else
        return (i + 1.0 / (i * i)) / pow(1.0 + exp(i), 1.0 / i) * P2(N, i - 1);
}

double P3(const int N, const int i, double t) // на підйомі зростає
{
    t *= (i + 1.0 / (i * i)) / pow(1.0 + exp(i), 1.0 / i);
    if (i >= 10)
      return t;
    else
        return P3(N, i + 1, t);
}

    double P4(const int N, const int i, double t) {
    t *= (i + 1.0 / (i * i)) / pow(1.0 + exp(i), 1.0 / i);
    if (i <= N)
        return t;
    return P4(N, i - 1, t);
}

int f(int N, int i, int t, int level, int &depth)
{
    if (level > depth)
        depth = level;

    cout << "level = " << level << endl;
    if (level == N)
        return depth;
    return f(N, i, t, level + 3, depth);
}


int main()
{
    int N, i;
    cout << "N = "; cin >> N;
    
int depth = 0;
    f(15, 0, 0, 3, depth);
    cout << "depth: " << depth << endl;

    
    cout << fixed << setprecision(10);
    cout << "(iter) P0 = " << P0 (N) << endl;
    cout << "(rec up +) P1 = " << P1(N, N) << endl;
    cout << "(rec up -) P2 = " << P2(N, 10) << endl;
    cout << "(rec down +) P3 = " << P3(N, N, 1) << endl;
    cout << "(rec down -) P4 = " << P4(N, 10, 1 )  << endl;
    return 0;
}
