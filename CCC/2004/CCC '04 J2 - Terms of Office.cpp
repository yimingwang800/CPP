#include <bits/stdc++.h>
using namespace std;

int this_year, future_year, position_change_year;

void position_switch() {
    position_change_year = this_year + 60;
}

int main() {
    cin >> this_year >> future_year;
    //position_change_year = this_year;
    cout << "All positions change in year " << endl;
    while (position_change_year <= future_year) {
        position_switch();
    }
    return 0;
}