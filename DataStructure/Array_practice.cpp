#include <bits/stdc++.h>
using namespace std;

int main() {
    int fav_num[7] = {2, 8, 12, 16, 18, 25, 100};
    
    for (int i = 0; i < 7; i++) {
        cout << fav_num [i] << endl;
    }
    cout << "sizeof(int): " << sizeof(int) << " sizeof(fav_num): " << sizeof(fav_num) << endl;
    cout << "array size or length: " << sizeof(fav_num)/sizeof(fav_num[0]) << endl;



    return 0;
}