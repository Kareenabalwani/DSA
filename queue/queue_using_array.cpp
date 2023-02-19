#include<bits/stdc++.h>
using namespace std;
#define N 5;
int q[5];
int front = -1;
int rear = -1;
int n =5;
void enqueue(){
    int x;
    cout<<"\nEnter x:";
    cin>>x;
    if(rear == n-1){
        cout<<"Oops! Queue is full !";
    }else if(front == -1 && rear == -1){
        front =0;
        rear =0;
        q[rear] =x;
    }else{
        rear++;
        q[rear]=x;
    }
}
void dequeue(){
    if(front == rear == -1){
        cout<<"Queue is empty";
    }
    else if(front == rear){
        front = rear = -1;
    }else{
        front++;
    }
}
void display(){
     if(front == -1 && rear == -1){
        cout<<"Queue is empty";
    }else{
        cout<<"\n";
    for(int i=front; i<=rear; i++){
        cout<<q[i]<<" ";
    }
    }
}

void peek(){
     if(front == -1 && rear == -1){
        cout<<"Queue is empty";
    }else{
        cout<<"\nfront element is: "<<q[front];
    }
    
}
int main(){
    // cout<<front;
    // cout<<q[front];
    enqueue();
    enqueue();
    enqueue();
    display();
    peek();
    dequeue();
    peek();
    dequeue();
    peek();
    display();
    enqueue();
    enqueue();
    enqueue();
    peek();
    display();
    return 0;
}