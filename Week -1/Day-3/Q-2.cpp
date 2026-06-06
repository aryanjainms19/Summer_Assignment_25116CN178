// ============================================
//   Prime Number Finder in a Range
//   Made by: Aryan
// ============================================

#include <iostream>
using namespace std;

// Function by Aryan to check if a number is prime
bool aryanIsPrime(int aryanNumber) {
    if (aryanNumber < 2) {
        return false;
    }

    for (int aryanDivisor = 2; aryanDivisor * aryanDivisor <= aryanNumber; aryanDivisor++) {
        if (aryanNumber % aryanDivisor == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int aryanStart, aryanEnd;

    cout << "========================================" << endl;
    cout << "     Prime Number Finder by Aryan       " << endl;
    cout << "========================================" << endl;

    cout << "\nEnter the starting number of the range: ";
    cin >> aryanStart;

    cout << "Enter the ending number of the range:   ";
    cin >> aryanEnd;

    if (aryanStart > aryanEnd) {
        cout << "\n[Aryan Error] Start must be less than or equal to End!" << endl;
        return 1;
    }

    cout << "\n--- Prime numbers between "
         << aryanStart << " and " << aryanEnd << " ---" << endl;

    int aryanCount = 0;

    for (int aryanCurrent = aryanStart; aryanCurrent <= aryanEnd; aryanCurrent++) {
        if (aryanIsPrime(aryanCurrent)) {
            cout << aryanCurrent;
            aryanCount++;

            // Print a newline after every 10 primes for readability
            if (aryanCount % 10 == 0) {
                cout << endl;
            } else {
                cout << "  ";
            }
        }
    }

    cout << "\n\n--- Total prime numbers found: " << aryanCount << " ---" << endl;


    return 0;
}
