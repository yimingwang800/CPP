#include <bits/stdc++.h>
using namespace std;

int main() {
    vector <char> playlist = {'A', 'B', 'C', 'D', 'E'};
    int button_num, num_of_times;
    while (cin >> button_num >> num_of_times) {
        if (button_num == 1) {
            for (int i = 1; i <= num_of_times; i++){
                playlist.push_back(playlist.front());
                playlist.erase(playlist.begin());
            }
        } else if (button_num == 2) {
            for (int i = 1; i <= num_of_times; i++){
                playlist.insert(playlist.begin(), playlist.back());
                playlist.pop_back();
            }
        } else if (button_num == 3) {
            for (int i = 1; i <= num_of_times; i++){
                swap(playlist[0], playlist[1]);
            }
        } else if (button_num == 4 && num_of_times == 1) {

        } break;
    }

    for (int i = 0; i < int(playlist.size()); i++){
        cout << playlist[i] << " ";
    }
    cout << endl;

    return 0;
}