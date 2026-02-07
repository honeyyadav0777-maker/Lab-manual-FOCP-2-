#include <iostream>
using namespace std;

int main() {
    int items;
    float price, total, finalAmount;

    cin >> items;
    cin >> price;

    total = items * price;

    if (items > 1000) {
        finalAmount = total - (total * 0.10);  
    }
    else {
        finalAmount = total;
    }

    cout << "Total Expense = " << finalAmount;

    return 0;
}
