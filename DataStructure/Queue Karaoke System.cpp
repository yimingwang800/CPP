#include <bits/stdc++.h>
using namespace std;

int main() {
    queue <string> playlist;
    string song;
    getline(cin, song);
    while (song != "end"){
        playlist.push(song);
        getline(cin, song);
    }
    while (!playlist.empty()) {
        cout << playlist.front() << endl;
        playlist.pop();
    }
    
    return 0;
}