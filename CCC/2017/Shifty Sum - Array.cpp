#include <bits/stdc++.h>
using namespace std;

int num, sum, shifts, shifty_sum, original_num, shifty_sum_next;

int shtifty_sum_function(){
    original_num = num;
    int shifty_sum[shifts] = {};
    for (int i = 1; i <= shifts; i++ ) {
        num = num*10;
        shifty_sum[i] = num+shifty_sum[i-1];
        shifty_sum_next = shifty_sum[i];
    }
    sum = original_num+shifty_sum_next;
    return sum;     // Integer, which is match with the data type of the function
}

int main() {
    cin >> num >> shifts;
    cout << shtifty_sum_function() << endl;
    return 0;
}