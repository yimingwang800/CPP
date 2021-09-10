#include <bits/stdc++.h>
using namespace std;

int main() {
    int x; 
    cin >> x;
    cout << " First digit is " << x/10000 << endl;
    cout << " Second digit is " << (x%10000)/1000 << endl;
    cout << " Third digit is " << (x%1000)/100 << endl;
    cout << " Fourth digit is " << (x%100)/10 << endl;
    cout << " Fifth digit is " << x%10 << endl;

    return 0;
}