#include <iostream>
#include <cmath>
using namespace std;

double f(double a) {
    return (1 + a + (a * a) / 2) / (1 + fabs(a));
}

int main() {
    double x;
    cout << "x: "; cin >> x;

    double numerator = 2 * f(1 + x * x) + pow(f(x), 2);
    double denominator = 1 + pow(f(x), 3) * sqrt(1 - fabs(x) * fabs(x));
    double result = numerator / denominator;

    cout << "Result: " << result << endl;

    return 0;
}
