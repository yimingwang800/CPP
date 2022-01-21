#include <bits/stdc++.h>
using namespace std;

int main() {
    int burger_order_number, side_order_number, drink_order_number, dessert_order_number, total_calories; 
    int burger[4] = {461, 431, 420, 0};
    int side[4] = {100, 57, 70, 0};
    int drink[4] = {130, 160, 118, 0};
    int dessert[4] = {167, 266, 75, 0};

    cin >> burger_order_number >> side_order_number >> drink_order_number >> dessert_order_number;
    total_calories = burger[burger_order_number-1] + side[side_order_number-1] + drink[drink_order_number-1] + dessert[dessert_order_number-1];
    cout << "Your total Calorie count is " << total_calories << "." << endl;

    return 0;
}