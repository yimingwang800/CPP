#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
    cin >> k;

    char new_icon_scalling [3*k] [3*k];
    char icon_scalling [3] [3] = {
        {'*', 'x', '*'},
        {' ', 'x', 'x'},
        {'*', ' ', '*'},
    };
    
    for (int i = 0; i < 3; i++ ) {
        for (int j = 0; j < 3; j++ ) {
            cout << icon_scalling[i][j] << " ";
        } 
        cout << endl;
    }

    for (int i = 0; i < 1*k; i++ ) {
        for (int j = 0; j < 1*k; j++ ) {
            new_icon_scalling[i][j] = '*';
        } 
    }
    for (int i = 1*k; i < 2*k; i++ ) {
        for (int j = 1*k; j < 2*k; j++ ) {
            new_icon_scalling[i][j] = 'x';
        } 
    }

    for (int i = 2*k; i < 3*k; i++ ) {
        for (int j = 2*k; j < 3*k; j++ ) {
            new_icon_scalling[i][j] = '*';
        } 
    }

    for (int i = 0; i < 6; i++ ) {
        for (int j = 0; j < 6; j++ ) {
            cout << new_icon_scalling[i][j]; 
        } 
    }cout << endl;

    return 0;
}