#include <bits/stdc++.h>
using namespace std;

int main() {
    int fav_num[7] = {2, 8, 12, 16, 18, 25, 100};
    int shifts[6] = {}; // initialized all elements value to zero
    char fav_thing_to_watch[5] = {'A', 'n', 'i', 'm', 'e'};
    float random_deciaml[3] = {2.5, 6.4, 9.8};
    string fav_animes[] = {"My Hero Academia", "Demon Slayer", "Hunter x Hunter", "Fukumenkai Noise"};
    // Assign value to array
    cin >> fav_num[3];      // Method 1
    cout << fav_num[3] << endl;
    fav_num[2] = 5;         // Method 2
    cout << fav_num[2] << endl;
    // Access array element
    cout << fav_num[1] << endl;

    int n = sizeof(fav_num)/sizeof(fav_num[0]);
    sort(fav_num, fav_num + n); // Ascending Order
    sort(fav_num, fav_num + n, greater<>());    // Descending Order
    cout << "Total memory size: " << sizeof(fav_num) << endl;
    cout << "Number of elements: " << sizeof(fav_num)/sizeof(fav_num[0]) << endl;

    return 0;
}