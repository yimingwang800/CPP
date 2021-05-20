#include <bits/stdc++.h>
using namespace std;

int main() {
    int sum, eleventh_number, twelfth_number, thirteenth_number;
    
    cin >> eleventh_number >> twelfth_number >> thirteenth_number; 
    sum = 9*1+7*3+8*1+0*3+9*1+2*3+1*1+4*3+1*1+8*3+eleventh_number*1+twelfth_number*3+thirteenth_number*1;
    cout << "The 1-3-sum is " << sum << endl;

    return 0;
}