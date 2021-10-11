#include <bits/stdc++.h>
using namespace std;

int main() {
    string word;
    
    do {
        cin >> word;
        if (word.length() <=4) {
            cout << word << endl;
        } else if (word.length() > 4 && word.length() <= 64) {
            if (word.substr( word.length() - 2) == "or"){
                cout << word.erase(word.size() - 2) << "our" << endl;
            } else {
                cout << word << endl;
            }
        }
    } while ( word != "quit!");
    
    return 0;
}