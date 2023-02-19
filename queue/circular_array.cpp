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
    if((rear+1) % n == front){
        cout<<"Oops! Queue is full !";
    }else if(front == -1 && rear == -1){
        front =0;
        rear =0;
        q[rear] =x;
    }else{
        rear = (rear+1)%n;
        q[rear]=x;
    }
}
void dequeue(){
    if(front ==-1 && rear == -1){
        cout<<"Queue is empty";
    }
    else if(front == rear){
        front = rear = -1;
    }else{
        front = (front +1)%n;
    }
}
void display(){
     if(front == -1 && rear == -1){
        cout<<"Queue is empty";
    }else{
    int i=front;
    cout<<"\n display:";
    while (i != rear)
    {
        cout<<q[i]<<" ";
        i = (i+1) %n;
    }
    cout<<q[rear];
    
    }
}

void peek(){
     if(front == -1 && rear == -1){
        cout<<"\nQueue is empty";
    }else{
        cout<<"\nfront element is: "<<q[front];
    }
    
}
int main(){
    
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
    enqueue();
    peek();
    display();
    return 0;
}