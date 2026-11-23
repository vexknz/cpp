#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); 

    const int MAX_SIZE = 100;
    int arr[MAX_SIZE][MAX_SIZE];
    int rows, cols;

    cout << "Vvedit kilkist ryadkiv i stovpciv (1 - " << MAX_SIZE << "): ";
    cin >> rows >> cols;

    if (rows < 1 || rows > MAX_SIZE || cols < 1 || cols > MAX_SIZE) {
        cout << "Pomylka: nekorektnyj rozmir masyvu." << endl;
        return 1;
    }

    cout << "\nMatrycya:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = rand() % 26;
            cout << setw(5) << arr[i][j];
        }
        cout << endl;
    }

    int targetColsCount = 0;

    cout << "\nSumy po stovpcyah:" << endl;

    for (int j = 0; j < cols; j++) {
        int colSum = 0;
        for (int i = 0; i < rows; i++) {
            colSum += arr[i][j];
        }
        
        cout << "Stovpec " << j + 1 << ": " << colSum << endl;

        if (colSum > 50) {
            targetColsCount++;
        }
    }

    cout << "\nKilkist stovpciv iz sumoyu > 50: " << targetColsCount << endl;

    return 0;
}