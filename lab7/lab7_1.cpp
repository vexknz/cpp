#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    const int MAX_SIZE = 100;
    double arr[MAX_SIZE][MAX_SIZE];
    int rows, cols;

    cout << "Vvedit kilkist ryadkiv i stovpciv (1 - " << MAX_SIZE << "): ";
    cin >> rows >> cols;

    if (rows < 1 || rows > MAX_SIZE || cols < 1 || cols > MAX_SIZE) {
        cout << "Pomylka: nekorektnyj rozmir masyvu." << endl;
        return 1;
    }

    cout << "\nMatrycya:" << endl;
    cout << fixed << setprecision(1);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = (rand() % 151 - 50) / 10.0;
            cout << setw(7) << arr[i][j];
        }
        cout << endl;
    }

    double minVal = arr[0][0];
    double sumPos = 0.0;
    int countPos = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] < minVal) {
                minVal = arr[i][j];
            }
            if (arr[i][j] > 0.0 && arr[i][j] <= 7.0) {
                sumPos += arr[i][j];
                countPos++;
            }
        }
    }

    double avg = (countPos > 0) ? (sumPos / countPos) : 0.0;
    double totalSum = minVal + avg;

    cout << setprecision(2);
    cout << "\nMinimalnyj element: " << minVal << endl;
    if (countPos > 0) {
        cout << "Serednye aryfmetychne (0 < x <= 7): " << avg << endl;
    } else {
        cout << "Elementiv u diapazoni (0; 7] ne znajdeno (serednye = 0)." << endl;
    }
    cout << "Suma minimumu ta serednyogo: " << totalSum << endl;

    return 0;
}