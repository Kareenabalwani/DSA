#include<bits/stdc++.h>
using namespace std;
stack<string> stk;

string convert_postfix_to_infix(string postfix){
    
    for(int i=0; i<postfix.length();i++){
        if(isalnum(postfix[i])){
            stk.push(string(1,postfix[i]));
        }else{
            
            string op1 = stk.top(); stk.pop();
            string op2 = stk.top(); stk.pop();
           string str = "("+ op2 + postfix[i]+ op1+")";
            stk.push(str);
            
        }
    }
    return stk.top();
}
int main(){
    string postfix = "ab+ef/*";
    cout<<"Infix of given postfix is:"<<convert_postfix_to_infix(postfix);
    return 0;
}