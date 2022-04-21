#include <bits/stdc++.h>
using namespace std;

bool distinct_digi(int year){
    int digits = 0;
    set <int> num_year;
    while(year != 0) {
        num_year.insert(year%10);
        year/=10;
        digits++;
    }
    if (num_year.size() == digits)
        return true;
    else
        return false;

}
bool distinct_str(int year){
    string string_year = to_string(year);
    set<int> year_set(string_year.begin(), string_year.end());

    if (year_set.size() == string_year.size())
         return true;
    else
        return false;
}
bool distinct_char(int year){
    set <int> num_year;
    string string_year = to_string(year);
    for (int i = 0; i < string_year.size(); i++){
        num_year.insert(string_year[i]);
    }
    if (num_year.size() == string_year.size())
         return true;
    else
        return false;

}

int main() {
    int year;
    cin >> year;

    for (int i = year + 1;; i++) {
        if (distinct_char(i)){
        //if (distinct_str(i)){
        //if (distinct_digi(i)){
            cout << i << endl;
            break;
        }
    }
    
    return 0;
}