#include <bits/stdc++.h>
using namespace std;

int main() {
    string response;
    do {
        cout << "Enter menu choice " << endl;
        cout << "Any letter" << endl << "Q" << endl << "q" << endl;
        cin >> response;
        cout << "Your input: " << response << endl;

    } while (response != "Q" && response != "q" );

    return 0;
}