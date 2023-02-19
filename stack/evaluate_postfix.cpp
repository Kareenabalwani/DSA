#include<bits/stdc++.h>
using namespace std;

stack<double> stk;
double EvaluatePostFix(string postfix){
    for(int i=0;i<postfix.length();i++){
        char ch = postfix[i];
        if(isdigit(ch)){
            stk.push(ch-'0');
        }else{
            double result,op1,op2 ;
            op1 = stk.top();
            stk.pop();
            op2 = stk.top();
            stk.pop();
            if(ch == '+')
                result = op2 + op1;
            else if( ch == '-')
                result = op2 - op1;
            else if( ch == '*')
                result = op2 * op1;
            else if( ch == '/')
                result = op2 / op1;
            else if( ch == '^')
                result = pow(op2,op1);
            else
                cout<<"invalid expression";
            stk.push(result);
        }
    }
return stk.top();
}
int main(){
    string postfix = "4572+-*";
    cout<<"The evaluation of postfix is: "<<EvaluatePostFix(postfix);

}