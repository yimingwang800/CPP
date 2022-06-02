#include <bits/stdc++.h>
using namespace std;

int main() {
    stack <char> Arr;
    char reverse[6] = {'a', 'b', 'c', 'd', 'e', 'f'};
    for (int i = 0; i <= 5; i++) {
        Arr.push(reverse[i]);
    }

    while(!Arr.empty()) {
        cout << Arr.top() << endl;
        Arr.pop();
    }

    
    return 0;
}