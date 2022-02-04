#include <bits/stdc++.h>
using namespace std;

int main() {
    int int_2d [3] [3] = {
        {0, 1, 2},
        {3, 4, 5},
        {6, 7, 8},

    };
    for (int i = 0; i < 3; i++ ) {
        for (int j = 0; j < 3; j++ ) {
            cout << int_2d[i][j] << " ";
        } 
        cout << endl;
    }

    for (int j = 0; j < 3; j++ ) {
        for (int i = 0; i < 3; i++ ) {
            cout << int_2d[i][j] << " ";
        } 
        cout << endl;
    }

    return 0;
}