#include <bits/stdc++.h>
using namespace std;

int main() {
    int num_parking_space;
    int num_occupied_both_days = 0;
    string parking_yesterday;
    string parking_today;
    cin >> num_parking_space >> parking_yesterday >> parking_today;
    bitset <100> both_occupied (0);

    for (int i = 0; i < num_parking_space; i++) {
        if (parking_yesterday[i] == 'C' && parking_yesterday[i] == parking_today[i]) {
            both_occupied.set (i, 1);
        }
    }

    num_occupied_both_days = both_occupied.count();
    cout << num_occupied_both_days << endl;
    
    return 0;
}