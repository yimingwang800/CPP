#include <bits/stdc++.h>
using namespace std;

int main() {
    int horizontal_flip = 0;
    int vertical_flip = 0;
    string flip;
    cin >> flip;

    int grid [2] [2] = {
        {1, 2},
        {3, 4}
    };
    
    for ( int i = 0; i < int(flip.size()); i++){
        if (flip[i] == 'H') {
            horizontal_flip++;
        } else {
            vertical_flip++;
        }
    }

    if ( vertical_flip % 2 == 1) {
        swap(grid[0][0], grid[0][1]);
        swap(grid[1][0], grid[1][1]);
    }

    if (horizontal_flip % 2 == 1) {
        swap(grid[0][0], grid[1][0]);
        swap(grid[0][1], grid[1][1]);
    }

    for (int i = 0; i < 2; i++ ){
        for (int j = 0; j < 2; j++ ){
            cout << grid[i][j] << " ";
        } cout << endl;
    }


    return 0;
}