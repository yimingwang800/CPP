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
                if (word.substr( word.length() - 3) == "aor" ||
                    word.substr( word.length() - 3) == "eor" ||
                    word.substr( word.length() - 3) == "ior" ||
                    word.substr( word.length() - 3) == "oor" ||
                    word.substr( word.length() - 3) == "uor" ||
                    word.substr( word.length() - 3) == "yor") {
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