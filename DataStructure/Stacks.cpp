#include <bits/stdc++.h>
using namespace std;

int main() {
    stack <int> stk;
    for (int i = 1; i <= 5; i++)
        stk.push(i);
    cout << stk.size() << endl;
    stk.push(6);
    cout << stk.top() << endl;
    stk.pop();

    while(!stk.empty()) {
        cout << stk.top() << endl;
        stk.pop();
    }

    for (int j = 1; j <= stk.size(); j++) {
        cout << stk.top() << endl;
        stk.pop();
    }
    
    return 0;
}