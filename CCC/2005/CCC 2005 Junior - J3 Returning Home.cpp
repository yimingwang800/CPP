#include <bits/stdc++.h>
using namespace std;

int main() {
    stack <string> instructions;
    string direction;
    cin >> direction;
    while (direction != "SCHOOL"){
            instructions.push(direction);
            cin >> direction;
    }
 
    while(!instructions.empty()) {
        if (instructions.top() == "R"){
                cout << "Turn LEFT ";
            } else if (instructions.top() == "L"){
                cout << "Turn RIGHT ";
            }
            instructions.pop();
            if(!instructions.empty()){
                cout << "onto " << instructions.top() << " street." << endl; 
                instructions.pop();   
            } else {
                cout << "into your HOME." << endl;      
            }
    }

    return 0;
}