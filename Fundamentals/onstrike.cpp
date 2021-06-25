#include <bits/stdc++.h>
using namespace std;

int main() {
    int grade;
    cin >> grade;

    if (grade > 12) {
        cout << "You are not eligible to get the compensation. " << endl;
    } else if (grade > 7){
        cout << "The total amount of money the parents will get is $30." << endl;
    } else if (grade >=1){
        cout << "The total amount of money the parents will get is $20." << endl;
    } else {
        cout << "You are not eligible to get the compensation. " << endl;
    }


    return 0;
}