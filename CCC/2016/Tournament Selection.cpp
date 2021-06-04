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
    else
        total = total;
    
    if (second_result == 'W')
        total = total + 1;
    else
        total = total;

    if (third_result == 'W')
        total = total + 1;
    else
        total = total;

    if (fourth_result == 'W')
        total = total + 1;
    else
        total = total;

    if (fifth_result == 'W')
        total = total + 1;
    else
        total = total;

    if (sixth_result == 'W')
        total = total + 1;
    else
        total = total;
    

    if (total == 5 or total == 6)
        cout << 1 << endl;
    else if (total == 3 or total == 4)
             cout << 2 << endl; 
        else if (total == 1 or total == 2)
                 cout << 3 << endl; 
             else  
                 cout << -1 << endl;

    return 0;
}