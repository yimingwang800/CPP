#include <bits/stdc++.h>
using namespace std;

int main() {

    int max_side_length;  //! Variable
    int number_of_tiles;  //! Variable 

    cin >> number_of_tiles;
    max_side_length = sqrt(number_of_tiles);
    cout << "The largest square has side length " << max_side_length << "." << endl;
    
    return 0;
}