#include <bits/stdc++.h>
using namespace std;

int main() {
    string text_input, string_input;
    int total_find = 0;
    int string_find = 0;
    cin >> text_input >> string_input;
    for (int i = 1; i <= int (string_input.length()); i++){
        string_input.push_back(string_input.front());
        string_input.erase(string_input.begin());
        string_find = text_input.find(string_input)+1;
        total_find = total_find + string_find;
    }
    
    if (total_find == 0){
        cout << "no" << endl;
    } else {
        cout << "yes" << endl;
    }
    
    return 0;
}