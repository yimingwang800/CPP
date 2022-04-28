#include <bits/stdc++.h>
using namespace std;

int main() {
        //Key   //Value
    map <string, int> my_dict = {
        {"Stray Kids", 1},
        {"NCT", 2},
        {"TXT", 3}
    };

    cout << my_dict["Stray Kids"] << endl; // acces 12
    //every element
    for (auto &item : my_dict) {
        cout << item.first << " " << item.second << endl;   // ietm.first= key, item.second = element
    }
    // Add, if the key is not exist
    my_dict["Enhypen"] = 8;
    //Update 
    my_dict["TXT"] = 9;
    //Delete
    my_dict.erase("Enhypen");
    for (auto &item : my_dict) {
        cout << item.first << " " << item.second << endl;   // ietm.first= key, item.second = element
    }
    //int has_key = my_dict.count(TXT);   //1
    //if (has_key > 0) {
    //if (my_dict.count('2' > 0)){
        //cout << "Key does exist." << endl;
    //}else {
        //cout << "Key doesn't exist!"<< endl;
    //}
    return 0;
}