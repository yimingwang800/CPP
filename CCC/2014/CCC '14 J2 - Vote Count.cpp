#include <bits/stdc++.h>
using namespace std;

int main() {
    int total_num_vote;
    int a_total = 0;
    int b_total = 0;
    char votes;
    cin >> total_num_vote;
    for ( int i = 1; i <= total_num_vote; i++) {
        cin >> votes;
        if (votes == 'A') {
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