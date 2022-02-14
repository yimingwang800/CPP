#include <bits/stdc++.h>
using namespace std;

int main() {
    char icon[3][3];
    for (int i = 0; i < 3; i++ ) {
        for (int j = 0; j < 3; j++ ) {
            cin >> icon[i][j];
        } 
    }

    for (int i = 0; i < 3; i++ ) {
        for (int j = 0; j < 3; j++ ) {
            cout<< icon[i][j];
        } 
    cout<<endl;
    }


    return 0;
}