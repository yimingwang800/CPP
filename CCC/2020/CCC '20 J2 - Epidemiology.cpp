#include <bits/stdc++.h>
using namespace std;

int main() {
    int num_people, num_disease_day_0, inffection_rate;
    cin >> num_people >> num_disease_day_0 >> inffection_rate; 
    int num_inffection_next_day = num_disease_day_0;
    int sum = num_disease_day_0;
    int total_days = 0;
    
    while (sum<=num_people) {
        num_inffection_next_day = num_inffection_next_day*inffection_rate;
        sum = sum + num_inffection_next_day;
        total_days++;
    }
    cout << total_days << endl;
    
    return 0;
}