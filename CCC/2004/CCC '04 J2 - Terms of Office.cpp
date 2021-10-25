#include <bits/stdc++.h>
using namespace std;

int this_year, future_year, position_change_year;

void position_switch() {
    position_change_year = position_change_year + 60;
}

int main() {
    cin >> this_year >> future_year;
    position_change_year = this_year;
    cout << "All positions change in year " << position_change_year << endl;
    while (position_change_year <= future_year - 60) {
        position_switch();
        cout << "All positions change in year " << position_change_year << endl;
    }
    return 0;
}