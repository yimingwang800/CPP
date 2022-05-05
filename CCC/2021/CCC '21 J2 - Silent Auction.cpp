#include <bits/stdc++.h>
using namespace std;

int main() {
    int number_of_bidders; 
    cin >> number_of_bidders;  
    int temp_value = 0;  
    string bidder_name[number_of_bidders] = {};
    int bid_amount[number_of_bidders] = {};
    for (int i = 0; i < number_of_bidders; i++ ) {
        cin >> bidder_name[i];
        cin >> bid_amount[i];
    }

    for (int i = 0; i < number_of_bidders; i++ ) {
       if (bid_amount[i] > temp_value)
            temp_value = bid_amount[i];
    }

    for (int i = 0; i < number_of_bidders; i++ ) {
        if (bid_amount[i] == temp_value){
            cout << bidder_name[i] << endl;
            break;
        }
    }

    return 0;
}