#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    // Constructor 
    Node(int d){
        this -> data = d;
        this -> next = NULL;
    }

};

//----------------------------   Insert at head ------------------

void insertAtHead(Node* &head,int d){ // reference is used to do changes in original linked list
    // create new node 
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

//   -------=========    Insert at tail --------=======
void insertAtTail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
    
}

// --------------------------   printing or traversing a linked list ---------------------
void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout<< temp ->data <<" ";
        temp = temp -> next;
    }
    cout<<endl;
}



int main(){
    Node* node1 = new Node(10);
    
  

    // head pointed to node
    Node* head = node1;
    Node* tail = node1;


    print(head);


    insertAtTail(tail, 12);
    print(head);

    insertAtTail(tail,15);
    print(head);



return 0;
}