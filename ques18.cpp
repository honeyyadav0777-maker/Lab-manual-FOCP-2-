#include <iostream>
using namespace std;

int main() {
    string id, rev = "";

    cin >> id;

    for (int i = id.length() - 1; i >= 0; i--) {
        rev = rev + id[i];
    }

    if (id == rev)
        cout << "Palindrome ID";
    else
        cout << "Not Palindrome ID";

    return 0;
}
