#include <iostream>
using namespace std;

int main() {
    int A, B;
    cout << "Vvedite A i B: " << endl;
    cin >> A >> B;

    bool bothOdd = (A % 2 != 0) && (B % 2 != 0);

    if (bothOdd) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}