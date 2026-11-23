#include <iostream>
using namespace std;

int main() {
    int A, B;
    cout << "Enter A and B: " << endl;
    cin >> A >> B;

    cout << "Res: ";
    for (int i = A; i <= B; ++i) {
        if (i % 10 == 0) {
            cout << i << " ";
        }
    }

    return 0;
}