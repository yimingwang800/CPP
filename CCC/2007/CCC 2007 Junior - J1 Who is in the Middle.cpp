#include <bits/stdc++.h>
using namespace std;

int main() {
    int weight[3] = {0};
    for (int i = 0; i < 3; i++) {
        cin >> weight[i];
    }

    int n = sizeof(weight)/sizeof(weight[0]);
    sort(weight, weight + n);
    cout << weight[1] << endl;
    
    return 0;
}