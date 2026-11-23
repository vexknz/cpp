#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    const int MAX_SIZE = 100;
    double arr[MAX_SIZE];
    int n;

    cout << "Enter kilk of nums array (1 - " << MAX_SIZE << "): ";
    cin >> n;

    if (n < 1 || n > MAX_SIZE) {
        cout << "Incorrect array size" << endl;
        return 1;
    }

    cout << "Array: ";
    for (int i = 0; i < n; i++) {
        arr[i] = (rand() % 11 - 5) / 2.0;
        cout << arr[i] << " ";
    }
    cout << endl;

    double maxVal = arr[0];
    int zeroCount = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
        if (arr[i] == 0.0) {
            zeroCount++;
        }
    }

    double result = maxVal + zeroCount;

    cout << "Max elem: " << maxVal << endl;
    cout << "Kilk 0 elems: " << zeroCount << endl;
    cout << "Sum max and kilk 0: " << result << endl;

    return 0;
}