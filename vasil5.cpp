#include <iostream>

using namespace std;

int main() {
    float num1, num2, result;
    int choice;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << "Press 1 for +" << endl;
    cout << "Press 2 for -" << endl;
    cout << "Press 3 for *" << endl;
    cout << "Press 4 for /" << endl;
    cout << "Press 5 for %" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1:
            result = num1 + num2;
            cout << "Addition is " << result << endl;
            break;
        case 2:
            result = num1 - num2;
            cout << "Subtraction is " << result << endl;
            break;
        case 3:
            result = num1 * num2;
            cout << "Multiplication is " << result << endl;
            break;
        case 4:
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Division is " << result << endl;
            } else {
                cout << "Error: Cannot divide by zero." << endl;
            }
            break;
        case 5:
            result = static_cast<int>(num1) % static_cast<int>(num2);
            cout << "Modulus is " << result << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}

