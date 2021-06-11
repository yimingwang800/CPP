#include <bits/stdc++.h>
using namespace std;

int main() {
    int total;
    char first_result, second_result, third_result, fourth_result, fifth_result, sixth_result;
    cin >> first_result;
    cin >> second_result;
    cin >> third_result;
    cin >> fourth_result;
    cin >> fifth_result;
    cin >> sixth_result;
    
    total = 0;

    if (first_result == 'W')
        total = total + 1;
    
    if (second_result == 'W')
        total = total + 1;

    if (third_result == 'W')
        total = total + 1;

    if (fourth_result == 'W')
        total = total + 1;

    if (fifth_result == 'W')
        total = total + 1;

    if (sixth_result == 'W')
        total = total + 1;
    

    if (total == 5 || total == 6)
        cout << 1 << endl;
    else if (total == 3 || total == 4)
        cout << 2 << endl; 
    else if (total == 1 || total == 2)
        cout << 3 << endl; 
    else  
        cout << -1 << endl;

    return 0;
}