#include <iostream>
using namespace std;

int main() {
    char c1, c2, temp;

    cout << "Enter first character: ";
    cin >> c1;
    cout << "Enter second character: ";
    cin >> c2;

    if (c1 > 'M' || c2 > 'M') {
        cout << "Enter a character less than 'M'." << endl;
    } else {
        temp = c1;
        c1 = c2;
        c2 = temp;

        cout  << c1 << endl;
        cout  << c2 << endl;
    }

    return 0;
}
