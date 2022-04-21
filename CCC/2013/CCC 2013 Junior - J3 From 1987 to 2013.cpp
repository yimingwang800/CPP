#include <bits/stdc++.h>
using namespace std;

int main() {

    int year;
    cin >> year;
    // end year is 2023
    // input year is 2020
    // for (int i = year + 1; ; i++) {
    for (int i = year + 1; i<=10000; i++) {
        string string_year = to_string(i);
        set<char> year_set(string_year.begin(), string_year.end());

        if (year_set.size() == string_year.size()){
            cout << i << endl;
            break;
        }
    }
    return 0;
}