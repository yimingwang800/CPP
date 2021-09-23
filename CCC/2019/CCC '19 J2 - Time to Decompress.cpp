#include <bits/stdc++.h>
using namespace std;

int main() {
    int lines;
    cin >> lines;
    
    for (int i = 1; i <= lines; i++) { // i, j, k, ... etc
        int num;
        char symbol;
        cin >> num >> symbol;
        for (int j = 1; j <= num; j++) {
            cout << symbol;        
        }
        cout << endl;
    }
    return 0;
}
