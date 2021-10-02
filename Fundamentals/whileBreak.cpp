#include <bits/stdc++.h>
using namespace std;

int main() {
    char input;
    while (cin >> input) {
        cout << "Within while loop!" << endl;
        cout << "Your input is " << input << endl;

        if (input == 'Y')
            break;
    }
    
    return 0;
}