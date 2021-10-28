#include <bits/stdc++.h>
using namespace std;

int add_function(int x, int y) {
    int z = x + y;
    return z;
}

int main() {
    int sum = add_function(1,12);
    cout << sum << endl;
    sum = add_function(2, 10);
    cout << sum << endl;
    return 0;
}