#include<bits/stdc++.h>
using namespace std;
stack<double> stk;

int evaluatePrefix(string prefix){
    for(int i=prefix.length()-1; i>=0; i--){
        char ch = prefix[i];
        if(!stk.empty()){
cout<<"\n stack top: "<<stk.top();
        }
        
        if(isdigit(ch)){
            stk.push(ch-'0');
        }else{
            double op1 = stk.top();
            stk.pop();
            double op2 = stk.top();
            stk.pop();
            double result;
            switch (ch)
            {
            case '+':
                result = op1 + op2;
                break;
            case '-':
                result = op1 - op2;
                break;

            case '*':
                result = op1 * op2;
                break;

            case '/':
                result = op1 / op2;
                break;
            
            case '^':
                result = pow(op1,op2);
                break;
            default:
            cout<<"invalid expression!";
            return -1;
                break;
            }
            stk.push(result);
        }
    }
    return stk.top();
}


int main(){
    string prefix = "*+69-31";
    cout<<"evaluation is: "<<evaluatePrefix(prefix);
    return 0;
}