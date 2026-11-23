#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double a, y = 1.0;
    int n;

    cout << "Enter a: " << endl;
    cin >> a;
    cout << "Enter n: " << endl;
    cin >> n;

    if (n < 1) {
        cout << "n >= 1!" << endl;
        return 1;
    }

    int k = 0;

    do {
        double term = a - k * n;
        y *= term;
        k++;
    } while (k <= n);

    cout << fixed << setprecision(4);
    cout << "Res y = " << y << endl;

    return 0;
}