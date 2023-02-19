#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int precedence(char ch){
    if(ch == '+' || ch == '-'){
        return 1;
    }else if(ch == '*' || ch == '/'){
        return 2;
    }else if(ch == '^'){
        return 3;
    }else{
        return 0;
    }
}
stack<char> stk;

string infixToPostFix(string infix){
    stk.push('#');
    string postFix = "";
    int n=infix.length();
    for(int i=0; i<n; i++){
        char ch = infix[i];
        if(isalnum(ch)){
            postFix += ch;
        }
        else if(ch == ')'){
            while(stk.top()!= '#' && stk.top()!= '('){
                postFix+=stk.top();
                stk.pop();
            }
            stk.pop();
        }
        else if(ch == '('){
            stk.push(ch);
            }
        else if(ch == '^'){
            stk.push(ch);
        }else{
            int preced = precedence(ch);
            if(precedence(ch) > precedence(stk.top())){
                stk.push(ch);
            }else{
                while(stk.top() !='#' && precedence(stk.top())>=preced){
                    postFix = postFix + stk.top();
                    stk.pop();
                }
                stk.push(ch);
            }
        }
    }

while(stk.top()!= '#'){
    postFix += stk.top();
    stk.pop();
}
return postFix;
}


int main(){
string infix ="x^y/(5*z)+2"; 
cout<<"The postfix is: "<<infixToPostFix(infix);
return 0;
}