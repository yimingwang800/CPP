#include <bits/stdc++.h>
#include <ctime>
using namespace std;

int main() {
    // 1 = Rock, 2 = Paper, 3 = Scissors
    srand ( time (0));
    int my_input;
    int computer_input;
    cout << "Choose your input: 1 for Rock, 2 for Paper, 3 for Scissors" << endl;
    cin >> my_input;
    computer_input = rand ()%3 + 1;
    cout << computer_input << endl;

    if (my_input == 1){ 
    if (computer_input == 1) {
       cout << "Tie" << endl;
    } else if (computer_input == 2) {
        cout << "Computer wins!" << endl;
    } else if (computer_input == 3) {
        cout << "I win!" << endl;
    }
    }

    if (my_input == 2) {
    if (computer_input == 1) {
        cout << "I win!" << endl;
    } else if (computer_input == 2) {
        cout << "Tie" << endl;
    } else if (computer_input == 3) {
        cout << "Computer wins!" << endl;
    }
    }

    if (my_input == 3) { 
    if (computer_input == 1) {
        cout << "Computer wins!" << endl;
    } else if (computer_input == 2) {
        cout << "I win!" << endl;
    } else if (computer_input == 3) {
        cout << "Tie" << endl;
    }
    }

    return 0;
}