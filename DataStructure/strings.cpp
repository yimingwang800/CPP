#include <bits/stdc++.h>
using namespace std;

int main() {
    string str = "abcde";

    cout << str[0] ;
    cout << str[1] ;
    cout << str[2] ;
    cout << str[3] ;
    cout << str[4] ;
    cout << str.length() << " " << str[11] << endl;
    cout << str.size() << " " << str[11] << endl;

    string greeting = "Hello World!\nHello World!\n";
    greeting = greeting + "Adding string.";
    greeting += "Adding string.";

    cout << "After combine string: " << greeting << endl;
    cout << greeting << endl;

    //greeting = "Hello" + " world!"; // Don't allow in c++
    cout << greeting.length() << endl;

    //str.insert(Position, string_to_Insert)
    str = str.insert(5, " Insertaion");
    cout << "After insert: " << str << endl;

    // str.substr(Position, length)
    str = str.substr(0, 3);
    cout << "After substr: " << str << endl;

    // str.replace(Position, Length, String_to_Replace)
    str = str.replace(2, 2, "oo");
    cout << "After replace: " << str << endl;

    //begin () - an iterator to the first element
    // end() - An iterator to the last elemenr=t
    str.replace(str.begin(), str.end()-3, "Replace");
    cout << "After replace: " << str << endl;

    return 0;
}