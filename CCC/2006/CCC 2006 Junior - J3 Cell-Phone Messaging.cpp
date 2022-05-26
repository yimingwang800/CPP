#include <bits/stdc++.h>
using namespace std;

int main() {
    string text;
    int time = 0;
    cin >> text;
    map <char, vector<int>> keys = {
        {'a', {1, 2}}, // keys['a'][1]
        {'b', {2, 2}},
        {'c', {3, 2}},
        {'d', {1, 3}},
        {'e', {2, 3}},
        {'f', {3, 3}},
        {'g', {1, 4}},
        {'h', {2, 4}},
        {'i', {3, 4}},
        {'j', {1, 5}},
        {'k', {2, 5}},
        {'l', {3, 5}},
        {'m', {1, 6}},
        {'n', {2, 6}},
        {'o', {3, 6}},
        {'p', {1, 7}},
        {'q', {2, 7}},
        {'r', {3, 7}},
        {'s', {4, 7}},
        {'t', {1, 8}},
        {'u', {2, 8}},
        {'v', {3, 8}},
        {'w', {1, 9}},
        {'x', {2, 9}},
        {'y', {3, 9}},
        {'z', {4, 9}}
    };
    
    while(text != "halt"){
        time += keys[text[0]][0];
        for (int i = 1; i < int(text.size()); i++ ) {
            if (keys[text[i]][1] == keys[text[i-1]][1]) {                
                time += keys[text[i]][0] + 2;
            } else {
                time += keys[text[i]][0];
            }
        }
        cout << time << endl;
        cin >> text;
        time = 0;
    }
    return 0;
}