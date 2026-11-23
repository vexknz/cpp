#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    double a, b, x;
    cout << "Enter a, b and x (x >= 0): " << endl;
    cin >> a >> b >> x;

    if (x < 0) {
        cout << "X must be >0!" << endl;
        return 1;
    }

    double sin_x = sin(x);
    double Y = a * b + (sin_x * sin_x) - sqrt(x);

    cout << "Y = " << Y << endl;

    return 0;
}