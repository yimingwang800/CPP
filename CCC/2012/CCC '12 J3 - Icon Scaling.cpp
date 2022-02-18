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
            new_icon_scalling[i][j] = icon_scalling [0] [0];
        } 
        for (int j = 1*k; j < 2*k; j++ ) {
            new_icon_scalling[i][j] = icon_scalling [0] [1];
        } 
        for (int j = 2*k; j < 3*k; j++ ) {
            new_icon_scalling[i][j] = icon_scalling [0] [2];
        }                 
    }

     for (int i = 1*k; i < 2*k; i++ ) {
        for (int j = 0; j < 1*k; j++ ) {
            new_icon_scalling[i][j] = icon_scalling [1] [0];
        } 
        for (int j = 1*k; j < 2*k; j++ ) {
            new_icon_scalling[i][j] = icon_scalling [1] [1];
        } 
        for (int j = 2*k; j < 3*k; j++ ) {
            new_icon_scalling[i][j] = icon_scalling [1] [2];
        }                 
    }   

     for (int i = 2*k; i < 3*k; i++ ) {
        for (int j = 0; j < 1*k; j++ ) {
            new_icon_scalling[i][j] = icon_scalling [2] [0];
        } 
        for (int j = 1*k; j < 2*k; j++ ) {
            new_icon_scalling[i][j] = icon_scalling [2] [1];
        } 
        for (int j = 2*k; j < 3*k; j++ ) {
            new_icon_scalling[i][j] = icon_scalling [2] [2];
        }                 
    }

    for (int i = 0; i < 3*k; i++ ) {
        for (int j = 0; j < 3*k; j++ ) {
            cout << new_icon_scalling[i][j]; 
        } cout << endl;
    }

    return 0;
}