#include <bits/stdc++.h>
using namespace std;

int main() {
    stack <char> Welcome;
    string str;
    getline(cin, str);
    for (int i = 0; i <= str.size(); i++) {
        Welcome.push(str[i]);
    }

    while(!Welcome.empty()) {
        cout << Welcome.top() << endl;
        Welcome.pop();
    }

    
    return 0;
}