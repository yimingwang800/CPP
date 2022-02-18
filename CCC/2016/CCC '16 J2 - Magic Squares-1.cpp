#include <bits/stdc++.h>
using namespace std;

int main() {
    int sum;
    int sum_horizontal[4] = {0};
    int sum_vertical[4] = {0};
    int square_numbers[4][4];

    for (int i = 0; i < 4; i++ ) {
        for (int j = 0; j < 4; j++ ) {
            cin >> square_numbers[i][j];
        } 
    }

    for (int i = 0; i < 4; i++ ){
        for (int j = 0; j < 4; j++ ){
            sum_horizontal[i] = sum_horizontal[i] + square_numbers[i][j];
        }
    }

    for (int j = 0; j < 4; j++ ){
        for (int i = 0; i < 4; i++ ){
            sum_vertical[j] = sum_vertical[j] + square_numbers[i][j];
        }
    }

    sum = sum_horizontal[0];
    for (int i = 0; i < 4; i++) {
        if (sum_horizontal[i] != sum || sum_vertical[i] != sum) {  
            cout << "not magic" << endl;
            return 0;
        }
    }
    cout << "magic" << endl;

    return 0;
}