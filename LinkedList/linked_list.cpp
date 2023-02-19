#include<iostream>
using namespace std;


class node{
    public:
    int data;
    node* next;
    //constructor that will store the element to this->data and this->next
    node(int data){
        this->data = data;
        this->next = 0;
    }

};
//head pointer of type node bcoz it will point the entire node of type node is initialized with 0 bcoz at first it will point to nothing
   node* head = 0;

void insertdata(){
    int choice=1;
      while(choice){
        int element;
        cout<<"Enter data:";
        cin>>element;
        node* newnode = new node(element);
        if(head == 0){
            //if the node is first node then will assign that new node to head pointer ....bcoz head pointer points to first node
            head = newnode;
            
        }else{
            node* temp = head;
            while(temp->next != 0){
                temp = temp->next;
            }
            temp->next = newnode;
        }
        // cout<<"\nDo you want to continue entering data?(1/0)yes or no?";
        cout<<"Do u want to continue?";
        cin>>choice;
        
    }
}

//insertion at the beginning
void insertAtBegin(){
    int element;
   cout<<"\nEnter data to be added at the beginning:";
   cin>>element;
    node* newnode = new node(element);
    newnode->next = head;
    head = newnode;

}
//insertion after given position
void insertAfterPosition(){
    int pos,element;
    cout<<"\nEnter position of insertion ";
    cin>>pos;
    node* temp = head;
    int i=1;
    cout<<"enter data to be inserted after "<<pos<<"th node: ";
    cin>>element;
    node* newnode = new node(element);
    while(i<pos){
        temp = temp->next;
        i++;

    }
   
    newnode->next = temp->next;
    temp->next = newnode;


}
//deletion at end
void deleteAtEnd(){
    node* temp = head;
    node* prev = temp;
    while(temp->next !=0){
        prev = temp;
        temp = temp->next;
    }
    prev->next = 0;
    delete temp;
    
}
void deleteAtBegin(){
    node* temp = head;
    head = temp->next;
    delete temp;
}

void deleteAtPos(){
    node* temp = head;
    node* prev = temp;
    int i=1,pos;
    cout<<"\nEnter position of node to be deleted:";
    cin>>pos;
    while(i<pos){
        prev = temp;
        temp = temp->next;
        i++;
    }
    prev->next = temp->next;
    delete temp;
}
void display(){
   //travers the list
    node* temp =head;
    if(head == 0){
        cout<<"list is empty";
        return;
    }
    cout<<"\nprinting the list...";
    while(temp!=0){
        cout<<temp->data<<" ---> ";
        temp = temp->next;
    }
}

int main(int argc, char const *argv[])
{
 
    //insertion at end
     insertdata();
     //printing the list
     display();

    //  insertAtBegin();
    //  display();
    
     insertAfterPosition();
     display();

    //  deleteAtEnd();
    //  display();

    //  deleteAtBegin();
    //  display();

    deleteAtPos();
    display();


    return 0;
}

 