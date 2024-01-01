#include<iostream>
#include<string>
#include<stack>
using namespace std;

bool isOperand(char x) {
    return (x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z');
}

int precedence(char x) {
    if (x == '+' || x == '-') {
        return 1;
    } else if (x == '*' || x == '/') {
        return 2;
    }
    return 0;
}

int main() {
    stack<char> notation;
    string infix = "";
    string postfix = "";
    // cout << "Enter Infix Notation : ";
    // cin >> infix;
    int i = 0, j = 0;
    while (infix[i] != '\0') {
        if (isOperand(infix[i])) {
            postfix += infix[i++];
        } else if (infix[i] == '(') {
            notation.push(infix[i++]);
        } else if (infix[i] == ')') {
            while (!notation.empty() && notation.top() != '(') {
                postfix += notation.top();
                notation.pop();
            }
            notation.pop();
            i++;
        } else {
            while (!notation.empty() && precedence(infix[i]) <= precedence(notation.top())) {
                postfix += notation.top();
                notation.pop();
            }
            notation.push(infix[i++]);
        }
    }
    while (!notation.empty()) {
        postfix += notation.top();
        notation.pop();
    }
    // cout << "Postfix Notation: " << postfix << endl;
    char *a;
    a = new char[4];
    a[0]='t';
    a[1]='h';
    a[2]='e';
    string b = "the";
    if(a==b){
        cout<<"Yes Char Array and String are same"<<endl;
    }else{
        cout<<"Not Same"<<endl;
    }
    return 0;
}
