#include <bits/stdc++.h>
using namespace std;

int main() {
    queue <int> q;

    for (int i = 0; i < 5; i++) {
        q.push(i);
    }

    cout << q.size() << endl;
    
    cout << q.front() << endl;
    cout << q.back() << endl;

    q.pop();

    while (!q.empty()) {
        cout << q.front() << endl;
        q.pop();
    }
    
    return 0;
}