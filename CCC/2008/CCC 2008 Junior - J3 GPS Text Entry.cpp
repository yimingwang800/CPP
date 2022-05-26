#include <bits/stdc++.h>
using namespace std;

int main() {
    string text;
    int steps = 0;
    map <char, vector<int>> keypad = {
        {'A', {1, 1}}, 
        {'B', {1, 2}},
        {'C', {1, 3}},
        {'D', {1, 4}},
        {'E', {1, 5}},
        {'F', {1, 6}},
        {'G', {2, 1}},
        {'H', {2, 2}},
        {'I', {2, 3}},
        {'J', {2, 4}},
        {'K', {2, 5}},
        {'L', {2, 6}},
        {'M', {3, 1}},
        {'N', {3, 2}},
        {'O', {3, 3}},
        {'P', {3, 4}},
        {'Q', {3, 5}},
        {'R', {3, 6}},
        {'S', {4, 1}},
        {'T', {4, 2}},
        {'U', {4, 3}},
        {'V', {4, 4}},
        {'W', {4, 5}},
        {'X', {4, 6}},
        {'Y', {5, 1}},
        {'Z', {5, 2}},
        {' ', {5, 3}},
        {'-', {5, 4}},
        {'.', {5, 5}},
        {'enter', {5, 6}}
    };
    getline(cin, text);
    steps += abs(keypad[text[0]][0]-keypad['A'][0]) + abs(keypad[text[0]][1]-keypad['A'][1]);
    for (int i = 1; i < int(text.size()); i++ ) {
        steps += abs(keypad[text[i]][0]-keypad[text[i-1]][0]) + abs(keypad[text[i]][1]-keypad[text[i-1]][1]);
    }
    steps += abs(keypad['enter'][0]-keypad[text[text.size()-1]][0]) + abs(keypad['enter'][1]-keypad[text[text.size()-1]][1]);
    cout << steps << endl;
    return 0;
}