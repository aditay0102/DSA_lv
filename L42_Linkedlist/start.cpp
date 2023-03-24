#include <iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

    ~Node(){
        int value = this -> data;
        if(this -> next != NULL){
            delete next;
            this -> next = NULL; 
        }
        cout << "memory is freed from data  "<<value<<endl;
    }

};

//   insersion 

void insertAthead(Node* &head,int d){
    // create new node 
    Node* temp = new Node(d);
    temp -> next = head;
    head  = temp ;

}

void insertAtMiddle(Node* &head,int pos, int d){
    Node* temp = head;
    int cnt = 1;

    while(cnt < pos -1){
        temp = temp -> next;
        cnt++;

    }

    // creating node 
    Node* NodeToInsert = new Node(d);
    NodeToInsert -> next = temp ->next;
    temp -> next = NodeToInsert;
    
}


void insertAtTail(Node* &tail,int d){
    Node* temp  = new Node(d);
    tail -> next  = temp ;
     temp = temp -> next;
}


// -------------------------------   Deletion a node

void delhead(Node* &head, int pos){

    // deleting first node
    if(pos == 1){
        Node* temp = head;
        head = head -> next;    
        // memory free in start node
        temp-> next = NULL; 
        delete temp;
    }
    else{ // deleting any middle and 
        Node*  curr =  head;
        Node* prev  = NULL;
        int cnt = 1;
        
        while(cnt < pos ){
            prev = curr;
            curr  = curr -> next;
            cnt++;
        }
        prev -> next = curr -> next; 
        curr -> next = NULL;
        delete curr;

    }

}

void print(Node* &head){
    Node* temp = head;

    while(temp!=NULL){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
}

int main(){
    Node* node1 = new Node(5);



    Node* head = node1;
    Node* tail = node1;

    insertAthead(head,10);
    
    insertAtTail(head,15);
    

    insertAtMiddle(head,2,99);
    print(head);

    delhead(head,3);
    print(head);
     
return 0;
}