#include<bits/stdc++.h>
using namespace std;
#define N 5;
class Node{
    public:
     int data;
     Node* next;

     Node(int val){
        this->data = val;
        this->next = NULL;
     }
};
Node* front = NULL;
Node* rear = NULL;
void enqueue(){
    int x;
    cout<<"Enter x:";
    cin>>x;
    Node *newNode = new Node(x);
    if(front == NULL){
        front = newNode;
        rear = newNode;
    }else{
        rear->next = newNode;
        rear = newNode;
    }
}
void dequeue(){
    if(front == NULL){
        cout<<"Queue is empty!";
    }else{
        Node* temp =front;
        front = front->next;
        delete temp;
    }
}
void display(){
       if(front == NULL){
        cout<<"Queue is empty!";
    }else{
   Node* temp = front;
   while(temp != NULL){
    cout<<temp->data<<" ";
    temp = temp->next;
   }
   }
}

void peek(){
       if(front == NULL){
        cout<<"Queue is empty!";
    }else{
        cout<<"\nPeek or Front element is:"<<front->data;
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
    return 0;
}