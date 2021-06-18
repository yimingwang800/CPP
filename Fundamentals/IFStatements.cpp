#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;
    // single IF statement
    // if (x == 8) {
    //    cout << "x is equal to 8." << endl;
    // } else {
    //   cout << "x is something else." << endl;

    if (x == 8) {
        cout << "x is equal to 8." << endl;
        // When True, execute all codes within this curly bracket
    } else if (x == 10) {
        cout << "x is equal to 10." << endl;
        // When False, execute all codes within this curly bracket
    } else if (x == 12) {
        cout << "x is equal to 12." << endl;
    } else {
        cout << "x is something else." << endl;
    }
    return 0;
}