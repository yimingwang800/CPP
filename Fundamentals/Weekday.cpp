#include <bits/stdc++.h>
using namespace std;

int main() {
    int input,day;
    cin >> input;
    day = input%7;

    if (day==1) {
        cout << "Monday" << endl;
    } else if (day==2) {
        cout << "Tuesday" << endl;
    } else if (day==3) {
        cout << "Wednesday" << endl;
    } else if (day==4) {
        cout << "Thursday" << endl;
    } else if (day==5) {
        cout << "Friday" << endl;
    } else if (day==6) {
        cout << "Saturday" << endl;
    } else {
        cout << "Sunday" << endl;
    }
    return 0;
}