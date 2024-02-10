#include <iostream>
using namespace std;

int main() {
    double baseAmount, gstPercentage, totalBill;

    cout << "Enter Base Amount: ";
    cin >> baseAmount;
    cout << "Enter GST%: ";
    cin >> gstPercentage;

    totalBill = baseAmount + (baseAmount * gstPercentage / 100);

    cout << "Total bill including " << gstPercentage << "% GST: " << totalBill << endl;

    return 0;
}
