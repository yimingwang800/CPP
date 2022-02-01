#include <bits/stdc++.h>
using namespace std;

int main() {
    int last_four_digits[4];
    for (int i = 0; i < 4; i++) {
        cin >> last_four_digits[i];
    }
    if (last_four_digits[0] != 8 || 9) {
        cout << "answer" << endl;
    } else if (last_four_digits[3] != 8 || 9) {
        cout << "answer" << endl;
    } else if (last_four_digits[1] != last_four_digits[2]) {
        cout << "answer" << endl;
    } else {
        cout << "ignore" << endl;
    }

    return 0;
}