#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std;

void printCenteredColored(const string& text, int textColor, int bgColor) {
    const int consoleWidth = 80;
    int len = static_cast<int>(text.length());
    int padding = (consoleWidth - len) / 2;
    if (padding < 0) {
        padding = 0;
    }

    cout << "\033[" << textColor << ";" << bgColor << "m";
    for (int i = 0; i < padding; i++) {
        cout << ' ';
    }
    cout << text << "\n";
    cout << "\033[0m";
}

void solveTask1() {
    int a, b, c, d;
    cout << "\nVvedit chotyry naturalni chysla: ";
    if (!(cin >> a >> b >> c >> d) || a <= 0 || b <= 0 || c <= 0 || d <= 0) {
        printCenteredColored("Pomylka! Vvedit chotyry naturalni chysla (> 0).", 31, 40);
        cin.clear();
        cin.ignore(10000, '\n');
        return;
    }

    int minVal = a;
    if (b < minVal) minVal = b;
    if (c < minVal) minVal = c;
    if (d < minVal) minVal = d;

    int maxVal = a;
    if (b > maxVal) maxVal = b;
    if (c > maxVal) maxVal = c;
    if (d > maxVal) maxVal = d;

    double ratio = static_cast<double>(minVal) / static_cast<double>(maxVal);
    int sumSquares = a * a + b * b + c * c + d * d;

    ostringstream ratioStream;
    ratioStream << fixed << setprecision(4) << ratio;

    cout << "\n\n\n";
    printCenteredColored("Vidnoshennia min/max: " + ratioStream.str(), 92, 44);
    printCenteredColored("Suma kvadrativ: " + to_string(sumSquares), 97, 44);
    cout << "\n\n\n";
}

void solveTask2() {
    int a, b, c, d;
    cout << "\nVvedit chotyry naturalni chysla: ";
    if (!(cin >> a >> b >> c >> d) || a <= 0 || b <= 0 || c <= 0 || d <= 0) {
        printCenteredColored("Pomylka! Vvedit chotyry naturalni chysla (> 0).", 31, 40);
        cin.clear();
        cin.ignore(10000, '\n');
        return;
    }

    double avg = (a + b + c + d) / 4.0;
    int prod = a * b * c * d;

    ostringstream avgStream;
    avgStream << fixed << setprecision(2) << avg;

    cout << "\n\n\n";
    printCenteredColored("Serednie aryfmetychne: " + avgStream.str(), 93, 45);
    printCenteredColored("Dobutok chysel: " + to_string(prod), 97, 45);
    cout << "\n\n\n";
}

int main() {
    int choice;

    do {
        cout << "\nMENU\n";
        cout << "1 - Rozv'iazuvannia pershoi zadachi\n";
        cout << "2 - Rozv'iazuvannia druhoi zadachi\n";
        cout << "0 - Vykhid\n";
        cout << "Vash vybir: ";

        if (!(cin >> choice)) {
            cout << "Nekorektne vvedennia. Sprobuit shche raz.\n";
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }

        switch (choice) {
            case 1:
                solveTask1();
                break;
            case 2:
                solveTask2();
                break;
            case 0:
                printCenteredColored("Zavershennia roboty prohramy...", 97, 41);
                break;
            default:
                printCenteredColored("Nevirnyi punkt menu! Oberit 1, 2 abo 0.", 91, 40);
                break;
        }
    } while (choice != 0);

    return 0;
}