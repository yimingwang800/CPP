#include <bits/stdc++.h>
using namespace std;

int main() {

    for (int i = 0; i<=99999; i++) {
        if ((i/10000)+((i/1000)%10)+((i/100)%10)+((i/10)%10)+(i%10)==3) {
            cout << i << endl;
        }
    }
    
    return 0;
}