#include <bits/stdc++.h>
using namespace std;

void position_switch(int this_year, int future_year) {
    int position_change_year;
    position_change_year = this_year;
    cout << "All positions change in year " << position_change_year << endl;
    while (position_change_year <= future_year - 60) {
        position_change_year = position_change_year + 60;
        cout << "All positions change in year " << position_change_year << endl;
    }
}

int main() {
    int this_year, future_year;
    cin >> this_year >> future_year;
    position_switch(this_year, future_year);
    
    return 0;
}