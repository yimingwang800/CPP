#include <bits/stdc++.h>
using namespace std;

int main() {
    //Data type (int) (vect = name)
    vector <int> vect = {1, 2, 3, 4};
    cout << vect[0] << endl;
    
    //Method 1
    for (int i = 0; i < int(vect.size()); i++){
        cout << vect[i] << endl;
    }
    // Method 2
    for (auto item : vect) {
        cout << item << endl;
    }

    //Vector iterator
    vector <int> sorting = {5, 4, 3, 1, 6, 2};
    //sorting.front() sorting.back() = value
    //sorting.begin() sorting.end() = pointer
    sort(sorting.begin(), sorting.end());   // Ascending
    sort(sorting.begin(), sorting.end(), greater<>()); //Descending
    sort(sorting.begin(), sorting.begin() + 3);     // First 3 element
    for (int i = 0; i < int(sorting.size()); i++){
        cout << sorting[i] << endl;
    }

    // Add element to the end
    vect.push_back(4);
    //Inster element by index, insert "10" to second element
    vect.insert(vect.begin()+1, 10);

    //Remove the last element
    vect.pop_back();
    //Remove the first element
    vect.erase(vect.begin());
    //Remove the second element to third element
    vect.erase(vect.begin()+1, vect.begin()+3);

    //2D Vector
    vector <vector <int>> vect_2d = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    };
    // displaying the 2d vecter
    for (int i = 0; i < vect_2d.size(); i++) {
        for (int j = 0; j < vect_2d.size(); j++)
            cout << vect_2d[i] [j] << " ";
        cout << endl;
    }

    string strw = "Hello";
    strw += " World!";
    cout << strw << endl;

    return 0;
}