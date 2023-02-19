#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void reverse(string str)
{
    for (int i = str.length() - 1; i >= 0; i--)
        cout << str[i];
}
string reverseStr(string& str)
{
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
    return str;
}
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

void infixToPreFix(string infix){
    stk.push('#');
    string preFix ="";
    infix = reverseStr(infix);
    int n=infix.length();
    for(int i=0; i<n; i++){
        char ch = infix[i];
        if(isalnum(ch)){
            preFix += ch;
          
        }
        else if(ch == '('){
            while(stk.top()!= '#' && stk.top()!= ')'){
                preFix+=stk.top();
                stk.pop();
            }
            stk.pop();
           
        }
        else if(ch == ')'){
            stk.push(ch);
            
            }
        else if(ch == '^'){
            stk.push(ch);
             
        }else{
            int preced = precedence(ch);
            if(precedence(ch) >= precedence(stk.top())){
                stk.push(ch);
                
            }else{
                while(stk.top() !='#' && precedence(stk.top())>preced){
                    preFix = preFix + stk.top();
                    stk.pop();
                }
                stk.push(ch);
                 
            }
        }
    }

while(stk.top()!= '#'){
    preFix += stk.top();
    stk.pop();
}
reverse(preFix);


}


int main(){
string infix ="x^y/(5*z)+2"; 

cout<<"The prefix is: ";
infixToPreFix(infix);

return 0;
}