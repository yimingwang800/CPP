#include <bits/stdc++.h>
using namespace std;

int i = 0;  // Global variable

int main() {
    int x = 10;
    if (x > 5) {
        int i = 55;  // local varible (only valid within the If statement)
        cout << "i = " << i << endl;
    }
    cout << "i = " << i << endl;

    return 0;
}