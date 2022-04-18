#include <bits/stdc++.h>
using namespace std;

int main() {
    //set<int> year_set = {};
    int year;
    cin >> year;
    auto begin = istream_iterator<string>(cin);
    auto end = istream_iterator<string>();
    set<string> year_set(begin, end);
    copy(year_set.begin(), year_set.end(), ostream_iterator<string>(cout, "\n"));
    return 0;
}