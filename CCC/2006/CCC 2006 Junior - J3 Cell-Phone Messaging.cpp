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
            if (text[0] == 'a') {
                time += keys['a'][0];
            }
            if (text[0] == 'b') {
                time += keys['b'][0];
            }
            if (text[0] == 'c') {
                time += keys['c'][0];
            }
            if (text[0] == 'd') {
                time += keys['d'][0];
            }
            if (text[0] == 'e') {
                time += keys['e'][0];
            }
            if (text[0] == 'f') {
                time += keys['f'][0];
            }
            if (text[0] == 'g') {
                time += keys['g'][0];
            }
            if (text[0] == 'h') {
                time += keys['h'][0];
            }
            if (text[0] == 'i') {
                time += keys['i'][0];
            }
            if (text[0] == 'j') {
                time += keys['j'][0];
            }
            if (text[0] == 'k') {
                time += keys['k'][0];
            }
            if (text[0] == 'l') {
                time += keys['l'][0];
            }
            if (text[0] == 'm') {
                time += keys['m'][0];
            }
            if (text[0] == 'n') {
                time += keys['n'][0];
            }
            if (text[0] == 'o') {
                time += keys['o'][0];
            }
            if (text[0] == 'p') {
                time += keys['p'][0];
            }
            if (text[0] == 'q') {
                time += keys['q'][0];
            }
            if (text[0] == 'r') {
                time += keys['r'][0];
            }
            if (text[0] == 's') {
                time += keys['s'][0];
            }
            if (text[0] == 't') {
                time += keys['t'][0];
            }
            if (text[0] == 'u') {
                time += keys['u'][0];
            }
            if (text[0] == 'v') {
                time += keys['v'][0];
            }
            if (text[0] == 'w') {
                time += keys['w'][0];
            }
            if (text[0] == 'x') {
                time += keys['x'][0];
            }
            if (text[0] == 'y') {
                time += keys['y'][0];
            }
            if (text[0] == 'z') {
                time += keys['z'][0];
            }

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