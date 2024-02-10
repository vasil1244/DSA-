#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter third number: ";
    cin >> num3;

    if (num1 == num2 && num2 == num3) {
        cout << endl;
    } else if (num1 == num2 || num2 == num3 || num1 == num3) {
        cout << endl;
    } else {
        int minNum = num1;
        if (num2 < minNum) {
            minNum = num2;
        }
        if (num3 < minNum) {
            minNum = num3;
        }
        cout << "The minimum number is: " << minNum << endl;
    }

    return 0;
}
