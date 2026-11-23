#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int processRow(const int* row, int cols, bool& hasPositive) {
    hasPositive = false;
    int evenSum = 0;

    for (int j = 0; j < cols; j++) {
        if (row[j] > 0) {
            hasPositive = true;
            break;
        }
    }

    if (hasPositive) {
        for (int j = 0; j < cols; j++) {
            if (row[j] % 2 == 0) {
                evenSum += row[j];
            }
        }
    }

    return evenSum;
}

int main() {
    srand(time(0));

    int rows, cols;
    cout << "Vvedit kilkist ryadkiv i stovpciv matryci: ";
    cin >> rows >> cols;

    if (rows <= 0 || cols <= 0) {
        cout << "Pomylka: rozmirnist maye buty dodatnoyu." << endl;
        return 1;
    }

    int** matrix = new int*[rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
    }

    cout << "\nZgenerovana matrycya:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = rand() % 26 - 15;
            cout << setw(5) << matrix[i][j];
        }
        cout << endl;
    }

    int totalSum = 0;
    cout << "\nPromizhni rezultaty po ryadkah:" << endl;

    for (int i = 0; i < rows; i++) {
        bool hasPositive = false;
        int rowEvenSum = processRow(matrix[i], cols, hasPositive);

        cout << "Ryadok " << i + 1 << ": ";
        if (hasPositive) {
            cout << "ye dodatni elementy -> suma parnyh = " << rowEvenSum << endl;
            totalSum += rowEvenSum;
        } else {
            cout << "nemaye dodatnyh elementiv (ryadok propuskayetsya)" << endl;
        }
    }

    cout << "\nZagalna suma parnyh elementiv vidibranyh ryadkiv: " << totalSum << endl;

    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}