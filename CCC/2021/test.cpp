#include <bits/stdc++.h>
using namespace std;

int main() {
    int number_of_bidders; 
    cin >> number_of_bidders;
    //map <int, string> sorted_Auction_list; 
    map <int, string, greater<int>> Auction_list; 
    string bidder_name;
    int bid_Amount;
    for (int i = 0; i < number_of_bidders; i++ ) {
        cin >> bidder_name;
        cin >> bid_Amount;
       Auction_list.insert(pair<int, string>(bid_Amount,bidder_name));
    }

    for (auto &item : Auction_list) {
       cout << item.first << " " << item.second << endl;   // ietm.first= key, item.second = element
    }

    cout << Auction_list.begin() -> second << endl;  

 
    return 0;
}
