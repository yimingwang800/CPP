#include <bits/stdc++.h>
using namespace std;

int main() {

    int number_of_repitions;
    char icon_scaling [3] [3] = {
        {'*', 'x', '*'},
        {' ', 'x', 'x'},
        {'*', ' ', '*'},
    };
    cin >> number_of_repitions;
    
    for (int i = 0; i < 3; i++ ) {
        for (int j = 0; j < number_of_repitions; j++ ) {
            for (int k = 0; k < 3; k++ ) {
                for (int l = 0; l < number_of_repitions; l++ ) {
                    cout << icon_scaling[i][k];
                }
            }
            cout << endl;
        }             
    }

    return 0;
}