// ============================================
//   LCM of Two Numbers
// ============================================
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int x, int y) {
    return (x / gcd(x, y)) * y;
}

int main() {
    int num1, num2;
    cout << "          LCM Calculator                " << endl;
    cout << "\nEnter first number:  ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    int result = lcm(num1, num2);
    cout << "\n--- Results ---" << endl;
    cout << "LCM(" << num1 << ", " << num2 << ") = " << result << endl;
    return 0;
}