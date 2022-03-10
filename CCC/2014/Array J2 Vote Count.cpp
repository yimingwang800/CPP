#include <bits/stdc++.h>
using namespace std;

int main() {
    int total_num_vote;
    cin >> total_num_vote;
    string votes;
    cin >> votes;
    int a_total = 0;
    int b_total = 0;
    for (int i = 0; i < total_num_vote; i++) {
        if (votes[i] == 'A') {
            a_total++;
        } else {
            b_total++;
        }
    }

    if (a_total > b_total) {
        cout << "A" << endl;
    } else if (a_total < b_total) {
        cout << "B" << endl;
    } else {
        cout << "Tie" << endl;
    }

    return 0;
}