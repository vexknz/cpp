#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int n;

    cout << "Enter kilk of massive (1 - " << MAX_SIZE << "): " << endl;
    cin >> n;

    if (n < 1 || n > MAX_SIZE) {
        cout << "Incorrect array size" << endl;
        return 1;
    }

    cout << "Array: " << endl;
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 41 - 20;
        cout << arr[i] << " ";
    }
    cout << endl;

    int sumEven = 0;
    bool hasEven = false;

    cout << "Parni elems: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            cout << arr[i] << " ";
            sumEven += arr[i];
            hasEven = true;
        }
    }

    if (!hasEven) {
        cout << "No elements";
    }
    cout << endl;

    cout << "Sum of pars elems: " << sumEven << endl;

    return 0;
}