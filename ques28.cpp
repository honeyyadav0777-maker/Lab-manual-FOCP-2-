#include <iostream>
using namespace std;

int main() {

    int arr[5];
    int evenSum = 0, oddSum = 0;

    cout << "Enter 5 elements:\n";

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];

        if (arr[i] % 2 == 0)
            evenSum = evenSum + arr[i];
        else
            oddSum = oddSum + arr[i];
    }

    cout << "Sum of Even numbers = " << evenSum << endl;
    cout << "Sum of Odd numbers = " << oddSum;

    return 0;
}
