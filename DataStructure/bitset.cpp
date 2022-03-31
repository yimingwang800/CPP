#include <bits/stdc++.h>
using namespace std;

int main() {
    bitset <8> bits (0); // Decimal number
    bitset <8> bits_two ("00000000");

         //Index, Value
    bits.set (0, 1);    // 0000 0000 -> 0000 0001
    bits[0] = 1;        // 0000 0000 -> 0000 0001

    bits.set (7, 1);    // 0000 0001 -> 1000 0001
    bits[0] = 1;        // 0000 0001 -> 1000 0001
    
    bits.reset (7);    // 1000 0001 -> 0000 0001
    bits[7] = 0;        // 1000 0001 -> 0000 0001

    cout << bits << endl;

    int x = 5;
    cout << int(6.5) << endl;   // Output 6
    cout << bitset<8>(x) << endl;   // Output 0000 0101
 
    string binary_str = bitset<8>(x).to_string();
    cout << binary_str << endl;
    cout << binary_str[2] << endl;  // String is Char vector
    // & = Binary AND
    // | = Binary OR


    return 0;
}