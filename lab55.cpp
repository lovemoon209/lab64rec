#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int C(int n, int k)
{
if (k == n || k == 0) 
     return 1;
else 
     return  C(n - 1, k - 1) + C(n -1, k);
}

int f(int n){
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n>1) return f(n-1) + f(n-2);
}

int main()
{
    int n,k;
    cout <<"n = "; cin >> n;
    cout <<"k = "; cin >> k;

    int S=0;
    for (int k=0; k<= n/2; k++){
 S += C(n - k, k);
    }
    cout << "S = " << S << endl;
    cout << "C = " << C(n, k) <<  endl;
    cout <<"f = "<< f(n) << endl;

    return 0;
}