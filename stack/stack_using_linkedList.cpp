#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* link;

    public:
    Node(int x){
        this->data = x;
    }
};
Node* top = NULL;
void push(){
    char choice='y';
    while(choice == 'y'){
    int x;
    cout<<"Enter x: ";
    cin>>x;
    Node* newNode = new Node(x);
    newNode->link = top;
    top = newNode;
    cout<<"Do you want to continue Entering?";
    cin>>choice;
    }
}
void pop(){
    Node* temp = top;
    if(top == NULL){
        cout<<"Stack is empty!";
        return;
    }
    else{
        temp = top;
        top = top->link;
        delete temp;
    }
}
void peek(){
    if(top == NULL){
        cout<<"Stack is empty!";
        return;
    }
    else{
        cout<<"Top element is: "<<top->data;
    }
}

void display(){
Node* temp = top;
    if(top == NULL){
        cout<<"Stack is empty!";
        return;
    }
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->link;
    }
}

int main(){

 char ch='y';
 while(ch == 'y'){
    int menu;
    cout<<"\n1. push Element";
    cout<<"\n2. pop Element ";
    cout<<"\n3. Top Element ";
    cout<<"\n4. Display All Elements ";
    cout<<"\nEnter from above!";
    cin>>menu;
    switch (menu)
    {
    case 1:
        push();
        break;
    case 2:
        pop();
        break;
    case 3:
        peek();
        break;
    case 4:
        display();
        break;
    
    default:
        cout<<"Enter valid choice from menu!";
        break;

    }
    cout<<"\nDo u want to continue ?";
    cin>>ch;
 }
 cout<<"Thank You !😉";
    return 0;
}