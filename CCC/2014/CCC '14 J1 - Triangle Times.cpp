#include <bits/stdc++.h>
using namespace std;

int main() {

    int x, y, z;
    
    cin >> x;
    cin >> y;
    cin >> z;

    if (x+y+z!=180) {
        cout << "Error" << endl;
        } else if (x == 60 && y == 60 && z == 60) {
            cout << "Equilateral" << endl;
        } else if (x==y || x==z || z==y) {
            cout << "Isosceles" << endl; 
        } else 
            cout << "Scalene" << endl;

    return 0;
}