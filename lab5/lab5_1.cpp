#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int n;
    cout << "Enter n (n >= 20): " << endl;
    cin >> n;

    if (n < 20) {
        cout << "n must be less than 20" << endl;
        return 1;
    }

    int limit = (n > 99) ? 99 : n;
    int current = 20;
    int product = 1;
    bool found = false;

    cout << "Res: " << limit << endl;

    while (current <= limit) {
        if (current % 3 == 0 && current % 5 == 0) {
            cout << current << " ";
            product *= current;
            found = true;
        }
        current++;
    }

    if (found) {
        cout << "Dobutok: " << product << endl;
    } else {
        cout << "No numbers" << endl;
    }

    return 0;
}