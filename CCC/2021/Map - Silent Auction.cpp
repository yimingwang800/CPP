#include <bits/stdc++.h>
using namespace std;

int main() {
    int number_of_bidders; 
    cin >> number_of_bidders;
    map <string, int> Auction_list = {}; 
    string bidder_name;
    int bid_Amount;
    for (int i = 0; i < number_of_bidders; i++ ) {
        cin >> bidder_name;
        cin >> bid_Amount;
       Auction_list. insert(pair<string, int>(bidder_name,bid_Amount));
    }

    auto max = max_element(Auction_list.begin(),Auction_list.end(), Auction_list.value_comp());
    cout << max->first << endl;

    for (auto &item : Auction_list) {
       cout << item.first << " " << item.second << endl;   // ietm.first= key, item.second = element
    }

    return 0;
}
