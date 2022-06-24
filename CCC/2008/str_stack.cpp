#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "- - 3 + 2 1 9";
    stack <char> line;
    int length = s.size();
    for (int i=length -1; i>=0; i=i-2){
        line.push(s[i]);
    }
    
    //while(!line.empty()) {
        //cout << line.top() << endl;
        //line.pop();
    //}

    return 0;
}