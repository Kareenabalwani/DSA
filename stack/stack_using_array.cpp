#include<bits/stdc++.h>
using namespace std;

int N=5;
int stk[5];
int top = -1;
void push(){
    int x;
    cout<<"Enter x: ";
    cin>>x;
    if(top == N-1){
        cout<<"Oops ! stack Overflow! You can't insert ";
        return;
    }else{
        top++;
        stk[top]=x;
    }
}
void pop(){
    if(top == -1){
        cout<<"Stack is empty! ";
        return;
    }else{
        cout<<"Element to be Popped is: "<<stk[top];
        top--;
    }
}

void peek(){
    if(top == -1){
        cout<<"Stack is empty! ";
        return;
    }else{
        cout<<"Top Element is: "<<stk[top];
    }
}
void display(){
    if(top == -1){
        cout<<"Stack is empty! ";
        return;
    }else{
        int temp = top;
        cout<<"\n";
        while(temp >=0){
              cout<<stk[temp]<<" ";
              temp--;
        }
      
    }
}
int main(){
   push();
   push();
   push();
   push();
   push();
   display();
   pop();
   display();
    return 0;
}