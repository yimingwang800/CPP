#include <bits/stdc++.h>
using namespace std;

int main() {
    string word;
    string last;
    
    do {
        cin >> word;
        if (word.length() <= 4) {
            cout << word << endl;
        } else if (word.length() > 4 && word.length() <= 64) {
            last = word.substr(word.length() - 2);
            if (last == "or") {
                last = word.substr(word.length() - 3);
                if (last == "aor" ||
                    last == "eor" ||
                    last == "ior" ||
                    last == "oor" ||
                    last == "uor" ||
                    last == "yor") {
                    cout << word << endl;
                } else {
                    cout << word.erase(word.size() - 2) << "our" << endl;
                }
            } else {
                cout << word << endl;
            }
        }
    } while ( word != "quit!");
    
    return 0;
}