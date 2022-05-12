#include <bits/stdc++.h>
using namespace std;

int main() {
    int operation, n;
    map <char, int> data = {
        {'A', 0},
        {'B', 0}
    };
    char x, y;

    cin >> operation; 
    while (operation != 7) {
        if (operation == 1) {
            cin >> x >> n;
            if (x == 'A'){
                data['A'] = n;
            }
            if (x == 'B'){
                data['B'] = n;
            }
        }

        if (operation == 2) {
            cin >> x;
            if (x == 'A'){
                cout << data['A'] << endl;
            }
            if (x == 'B'){
                cout << data['B'] << endl;
            }
        }

        if (operation == 3) {
            cin >> x >> y;
            data[x] += data[y];
        }

        if (operation == 4) {
            cin >> x >> y;
            data[x] *= data[y];
        }

        if (operation == 5) {
            cin >> x >> y;
            data[x] -= data[y];
        }

        if (operation == 6) {
            cin >> x >> y;
            data[x] /= data[y];
        }

        cin >> operation; 
    }
    
    
    return 0;
}
