#include <iostream>
using namespace std;

int main() {

    int m1, m2, m3, m4, m5;
    int total;
    float percentage;

    cout << "Enter marks of 5 subjects: ";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    total = m1 + m2 + m3 + m4 + m5;

    percentage = (total / 500.0) * 100;

    cout << "Total Marks = " << total << endl;
    cout << "Percentage = " << percentage << "%";

    return 0;
}
