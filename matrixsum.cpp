#include <iostream>
using namespace std;

int main() {
    int inv[2][2], reward[2][2], result[2][2];

    // Input current inventory
    cout << "Enter current inventory:\n";
    for(int i=0;i<2;i++) {
        for(int j=0;j<2;j++) {
            cin >> inv[i][j];
        }
    }

    // Input rewards
    cout << "Enter rewards:\n";
    for(int i=0;i<2;i++) {
        for(int j=0;j<2;j++) {
            cin >> reward[i][j];
        }
    }

    // Add matrices
    for(int i=0;i<2;i++) {
        for(int j=0;j<2;j++) {
            result[i][j] = inv[i][j] + reward[i][j];
        }
    }

    // Display result
    cout << "Updated Inventory:\n";
    for(int i=0;i<2;i++) {
        for(int j=0;j<2;j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}