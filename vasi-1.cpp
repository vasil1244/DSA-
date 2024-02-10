#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter any number: ";
    cin >> num;

    num >= 0 ? (num % 2 == 0 ? cout << "The number is even." : cout << "The number is odd.") 
			 : cout << "Enter 0 or greater number.";

    return 0;
}
