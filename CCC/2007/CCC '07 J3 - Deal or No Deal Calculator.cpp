#include <bits/stdc++.h>
using namespace std;

int main() {
    int num_case_opened, case_eliminated, Banker_offer, average;
    int i = 0, sum = 0, total_cases = 10;
    cin >> num_case_opened;
    map <int, int> briefcases = {
        {1, 100},
        {2, 500},
        {3, 1000},
        {4, 5000},
        {5, 10000},
        {6, 25000},
        {7, 50000},
        {8, 100000},
        {9, 500000},
        {10, 1000000}
    };

    for (int j = 1; j <= 10; j++) {
        sum += briefcases[j];
    }

    while (i < num_case_opened) {
        cin >> case_eliminated;
        sum -= briefcases [case_eliminated];
        total_cases--;
        i++;

    }

    average = sum/total_cases;

    cin >> Banker_offer;

    if (average < Banker_offer) {
        cout << "deal" << endl;
    } else {
        cout << "no deal" << endl;
    }
    
    return 0;
}