#include <bits/stdc++.h>
using namespace std;

int main() {
    int num_of_t = 0;
    int num_of_s = 0;
    int num_lines;
    cin >> num_lines;
    string text;
    cin.ignore();
    for (int i = 0; i < num_lines; i++){
        getline(cin, text);
        for (int i = 0; i < int(text.length()); i++) {
            if (text[i] == 't' || text[i] == 'T') {
                num_of_t++;
            }
        }
        for (int i = 0; i < int(text.length()); i++) {
            if (text[i] == 's' || text[i] == 'S') {
                num_of_s++;
            }
        }
    } 

    if (num_of_t > num_of_s){
        cout << "English" << endl;
    } else{
        cout << "French" << endl;
    }
    
    return 0;
}