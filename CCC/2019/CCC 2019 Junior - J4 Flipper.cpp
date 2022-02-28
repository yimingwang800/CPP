#include <bits/stdc++.h>
using namespace std;

int main() {
    int grid_vertical [2][2];
    int grid_horizontal [2][2];
    string s;
    cin >> s;
    int string_size = s.length();
    char flip_input [string_size];
    strcpy(flip_input, s.c_str());

    int grid [2] [2] = {
        {1, 2},
        {3, 4}
    };
    
    for (int k = 0; k < string_size; k++ ){
        if (flip_input [k] == 'V') {
            for (int i = 0; i < 2; i++ ){
                for (int j = 0; j < 2; j++ ){
                    grid_vertical[i][j] = grid[i][1-j];
                }                  
            }             
            for (int i = 0; i < 2; i++ ){
                for (int j = 0; j < 2; j++ ){
                    grid[i][j] = grid_vertical[i][j];
                }                  
            } 
        } else if (flip_input [k] == 'H') {
            for (int i = 0; i < 2; i++ ){
                for (int j = 0; j < 2; j++ ){
                    grid_horizontal[i][j] = grid[1-i][j];
                }                  
            }             
            for (int i = 0; i < 2; i++ ){
                for (int j = 0; j < 2; j++ ){
                    grid[i][j] = grid_horizontal[i][j];
                }   
            }
        }
    }

for (int i = 0; i < 2; i++ ){
        for (int j = 0; j < 2; j++ ){
            cout << grid[i][j] << " ";
        } cout << endl;
    }


    return 0;
}