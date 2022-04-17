#include <bits/stdc++.h>
using namespace std;

int main() {
    int year;
    cin >> year;
    set<int> year_set = {};
    year_set.insert(year);
    for (auto find = year_set.begin(); find != year_set.end(); find++) {
        cout << *find << endl;
    }
    
    return 0;
}