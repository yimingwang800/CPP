#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string song;
    vector <string> playlist;
    getline(cin, song);
    while (song != "end"){
        playlist.push_back(song);
        getline(cin, song);
    }
    // similar to queue
    for (int i = 0; i < int(playlist.size()); i++){
        cout << playlist[i] << endl;
    }

    // similar to stack
    for (int i = int(playlist.size())-1; i >= 0; i--){
        cout << playlist[i] << endl;
    }
    
    return 0;
}