#include <bits/stdc++.h>
using namespace std;

int main() {

    int year;
    cin >> year;
    for (int i = year + 1; ; i++) {
        string string_year = to_string(i);
        set<int> year_set(string_year.begin(), string_year.end());

        if (year_set.size() == string_year.size()){
            cout << i << endl;
            break;
        }
    }
    return 0;
}