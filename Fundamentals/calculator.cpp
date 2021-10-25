#include <bits/stdc++.h>
using namespace std;

float num1, num2, result;     // Global Variable

void addition() {
    result = num1 + num2;
    cout << result << endl;
}
void subtraction() {
    result = num1 - num2;
    cout << result << endl;
}
void multiplication() {
    result = num1*num2;
    cout << result << endl;
}
void division() {
    result = num1/num2;
    cout << result << endl;
}

int main() {
    char operation;
    cout << "Put in an equation" << endl;
    cin >> num1 >> operation >> num2;
    if (operation == '+') {
        addition();
    } else if (operation == '-') {
        subtraction();
    } else if (operation == '*') {
        multiplication();
    } else if (operation == '/') {
        division();
    }
    
    
    return 0;
}