#include <bits/stdc++.h>
using namespace std;

int main() {
    int num_disease_day_0, inffection_rate, num_people;
    cin >> num_people >> num_disease_day_0 >> inffection_rate; 
    int sum = num_disease_day_0;
    int num_disease_nextday = num_disease_day_0;
    while (sum < num_people ) {
        int total_days = 0;
        num_disease_nextday = num_disease_nextday * inffection_rate;
        sum = sum + num_disease_nextday; 
        total_days++;
        cout << total_days++ << endl;
        }    
    return 0;

}