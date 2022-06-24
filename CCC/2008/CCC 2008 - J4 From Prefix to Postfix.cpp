#include <bits/stdc++.h>
using namespace std;

 //function to check if charactor is an operator or not
bool isOperator (char x) {
    if (x == '+' || x == '-' || x == '*' || x == '/') {
        return true;
    } else {
        return false;
    }

    // switch (x) {
    //     case '+':
    //     case '-':
    //     case '*':
    //     case '/':
    //     return true;
    // } return false;
}

//Convert prefix to postfix
string preToPost(string pre_exp){
    stack <string> s;
    //length of the expression
    int length = pre_exp.size();

    //read from right to left
    for (int i=length -1; i>=0; i=i-2){
        //check if symbol is an operator
        if (isOperator(pre_exp[i])){
            //pop two operands from stack
            string op1 = s.top();
            s.pop();
            string op2 = s.top();
            s.pop();

            //concat the operands and operator
            string exp = op1 + " " + op2 + " "+ pre_exp[i];

            //push string exp back to stack
            s.push(exp);
        } else {    //if symbol is an operand
            //push the operand to the stack
            s.push(string(1,pre_exp[i]));
        }

    }

    //stack contains only the postfix expression
    return s.top();

}

int main(){
    string pre_exp;
    getline(cin, pre_exp);
    while (pre_exp != "0") {
        cout << preToPost(pre_exp)<< endl;
        getline(cin, pre_exp);
    }

    return 0;
}

    
