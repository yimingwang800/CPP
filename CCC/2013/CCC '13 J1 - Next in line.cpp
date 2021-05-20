#include <bits/stdc++.h>
using namespace std;

int main() {

    int middle_age;  //! Variable
    int oldest_age;  //! Variable 
    int youngest_age;  //! Variable 

    cin >> youngest_age >> middle_age;
    oldest_age = middle_age + (middle_age - youngest_age); 
    cout << oldest_age << endl;
    
    return 0;
}