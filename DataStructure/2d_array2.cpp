#include <bits/stdc++.h>
using namespace std;

int main() {
    int int_2d [4] [4] = {
        {1, 2, 1, 1},
        {1, 1, 2, 1},
        {1, 1, 1, 2},
        {0, 1, 1, 1}

    };
    for (int i = 0; i < 4; i++ ) {
        for (int j = 0; j < 4; j++ ) {
            cout << int_2d[i][j] << " ";
        } 
        cout << endl;
    }

    return 0;
}