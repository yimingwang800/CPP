#include <bits/stdc++.h>
using namespace std;

int main() {
    //set<char> my_set;
    set<int> my_set = {3, 2, 4, 1};
    my_set.insert(3);
    my_set.insert(2);
    my_set.insert(1);
    my_set.insert(5);
    cout << my_set.size() << endl;

    //Iterate set and delete element:
    // for (int istem : my_set)
    for (auto item : my_set)
        cout << item << " ";

    //for (auto it = my_set.begin(); it != my_set.end(); it++) {
        //cout << "Pointer: " << &it << " Values: " << *it << endl;
    //}
    for (auto it = my_set.begin(); it != my_set.end(); it++) {
        cout << "Element's value: " << &it << " Values: " << *it << endl;
    }

    //Delete element and delete all elements
    //my_set.erase(1);
    //my_set.clear();

    auto it = my_set.begin();   // Pointer of first element
    cout << *it;

    advance(it, 2); // Current pointer + 2 (The third element)
    cout << *it << endl;    // output = 13; 1 = first value, 3 = third value

    //it++; // Pointer + 1, point to next element
    //cout << *it;
    //advance(it,1);  // current pointer + 1, next element

    //Determine Element in Set
    auto find_it = my_set.find(5);
    if (find_it != my_set.end()){
        cout << "Found!" << endl;
    } else {
        cout << "Not found!" << endl;
    }

    //Unordered Set
    unordered_set<int> unorder_set;
    unorder_set.insert(1);
    unorder_set.insert(3);
    unorder_set.insert(4);
    unorder_set.insert(2);
    unorder_set.insert(2);
    for (auto find = unorder_set.begin(); find != unorder_set.end(); find++) {
        cout << *find << endl;
    }
    
    return 0;
}