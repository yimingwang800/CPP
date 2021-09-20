#include <bits/stdc++.h>
using namespace std;

int main() {
    int sum;
    cout << "Input a number between 6 and 100" << endl;
    cin >> sum;
    
    for (int a = 1; a <= 97; a++) {
        for (int b = a+1; b <= 97; b++) {
            for (int c = b+1; c <=97; c++) {
                if ( a+b+c==sum) {
                    cout << a << " " << b << " " << c << endl;
                }
            }
        }
    }
    return 0;
}