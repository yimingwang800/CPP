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

int shtifty_sum_function_1(){
    original_num = num;
    for (int i = 0; i < shifts; i++ ) {
        num = num*10;
        shifty_sum = num+shifty_sum;
    }
    sum = original_num+shifty_sum;
    return sum;     // Integer, which is match with the data type of the function
}



int main() {
    cin >> num >> shifts;
    // shtifty_sum_function();
    cout << shtifty_sum_function_1() << endl;

    int result = shtifty_sum_function_1();
    cout << result << endl;
    return 0;
}