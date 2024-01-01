// Paranthesis matching 

#include<iostream>
#include<stack> 
using namespace std;

bool isBalanced(string S){
    stack<char> paraMatch;
    for(int i = 0 ; i < S.size() ; i++){
        if(S[i]=='('){
            paraMatch.push('(');
        }
        else if(S[i]==')'){
            if(paraMatch.empty()){
                return false;
            }
            else{
                paraMatch.pop();
            }
        }
    }
    return paraMatch.empty();
}

int main(){
    string expression;
    cout<<"Enter Expression : ";
    cin>>expression;
    cout<<isBalanced(expression);
    return 0;
}