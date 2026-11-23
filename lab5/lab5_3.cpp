#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int k = 100;
    cout << "Enter k metres: " << endl;
    cin >> k;

    if (k <= 0) {
        cout << "K must be > 0!" << endl;
        return 1;
    }

    int count = 0;

    cout << setw(8) << "Variants: " 
         << setw(18) << "Brus 3 m" 
         << setw(18) << "Brus 2 m" 
         << setw(18) << "Brus 1 m" << endl;

    for (int x = 0; x <= k / 3; ++x) {
        int remAfter3 = k - 3 * x;

        for (int y = 0; y <= remAfter3 / 2; ++y) {
            int z = remAfter3 - 2 * y;
            count++;

            cout << setw(8) << count
                 << setw(18) << x
                 << setw(18) << y
                 << setw(18) << z << endl;
        }
    }

    cout << "Zag kilk vars: " << count << endl;

    return 0;
}