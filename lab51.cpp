// Lab 5_1
#include <iostream>
#include <cmath>

using namespace std;
double h(const double a, const double b); 
int main()
{
double t, s;
cout << "t = "; cin >> t;
cout << "s = "; cin >> s;
double f = ((pow(h(t * t, 1), 3))  + h (1, t * s * s)) / (1 + (pow(h(s, t), 2) ));
cout << "f = " << f << endl;
return 0;
}
double h(const double a, const double b) {
        return (pow(a, 2) * sin(b) + pow(b, 2)* cos(a));

}
