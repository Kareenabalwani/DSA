#include<bits/stdc++.h>
using namespace std;
stack<string> stk;
//we have to scan prefix exp from right to left so just reverse and scan
string reverseStr(string& str)
{
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
    return str;
}
string convert_prefix_to_infix(string prefix){
    cout<<"prefix "<<prefix;
    prefix = reverseStr(prefix);
     cout<<"prefix "<<prefix;
    for(int i=0; i<prefix.length();i++){

        
        if(isalnum(prefix[i])){
            stk.push(string(1,prefix[i]));
        }else{
            
            string op1 = stk.top(); stk.pop();
            string op2 = stk.top(); stk.pop();
           string str = "("+ op1 + prefix[i]+ op2+")";
            stk.push(str);
            
        }
    }
    return stk.top();
}
int main(){
    string prefix = "*+ab/ef";
    cout<<"Infix of given prefix is:"<<convert_prefix_to_infix(prefix);
    return 0;
}