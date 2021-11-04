#include <bits/stdc++.h>
using namespace std;
int num, sum, shifts, shifty_sum, original_num;
void shtifty_sum_function(){
    original_num = num;
    for (int i = 0; i < shifts; i++ ) {
        num = num*10;
        shifty_sum = num+shifty_sum;
    }
    sum = original_num+shifty_sum;
    cout << sum << endl;
}

int main() {
    cin >> num >> shifts;
    shtifty_sum_function();
    return 0;
}