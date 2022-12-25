#include<iostream>
#include<map>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //Constructor
    Node(int data){
        this ->data = data;
        this ->next = NULL;
    }

    //Destructor
    ~Node(){
        int value= this->data;
        //memory free kara rhe hain
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
            cout<<"memory is free for node with data"<<value<<endl;
    }
};

void InsertAtHead(Node* &Head , int value){

    //new node create
    Node* temp = new Node(value);
    temp ->next = Head;
    Head = temp;
}

void print(Node* &head){

    //empty list
    if(head==NULL){
        cout<<"List is Empty"<<endl;
    }
    Node* temp= head;

    while (temp != NULL){
        cout<<temp -> data<<"->";
        temp = temp ->next;
    }
    cout<<endl;
}


void InsertAtTail(Node* &tail,int value){
    //new node create
    Node* temp = new Node(value);
    tail ->next = temp;
    tail = tail -> next;
}

void insertAtPossition(Node * &tail, Node* &head,int possition , int d){

    //Insert at Start
    if(possition==1){
        InsertAtHead(head,d);
        return;
    }

    Node* temp=head;
    int count=1;

    while(count < possition-1){
        temp=temp->next;
        count++;
    }

     //Inserting At Last Possition
    if(temp->next==NULL){
        InsertAtTail(tail,d);
        return ;
    }

    //creating a node for d
    Node* nodeToInsert= new Node(d);
    
    nodeToInsert ->next = temp ->next;
    temp ->next = nodeToInsert;


}

void insertNode(Node* &tail,int element,int d){

    //empty list
    if(tail==NULL){
        Node* newNode=new Node(d);
        tail=newNode;
        newNode->next=newNode;
    }
    else
    {
        //non empty list
        //Assuming that the element is present in the lined list

        Node* curr=tail;

        while(curr->data!=element){
            curr=curr->next;
        }

        //element found ->> curr is representing that element

        Node* temp=new Node(d);
        temp->next=curr->next;
        curr->next=temp;
    }
}

void deletenode(int possition,Node* &head){

    //deleting first node
    if(possition==1){
        Node* temp=head;
        head = head -> next;
        //memory free start node
        temp->next=NULL;
        delete temp;
    }
    else
    {
        //deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int count=1;
        while(count < possition){
            prev = curr;
            curr = curr ->next;
            count++;
        }
        prev -> next = curr ->next;
        curr->next=NULL;
        delete curr;

    }
}

Node* reverseLinkedList(Node* head){
    if(head==NULL || head->next==NULL){
        return head ;
    }
    Node* prev=NULL;
    Node* curr=head;
    Node* forward=NULL;

    while(curr!=NULL){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
        return prev;
}

bool isCircular(Node* head){
    //empty list
    if(head==NULL){
        return true;
    }

    Node* temp=head->next;
    while(temp != NULL && temp != head){
        temp=temp->next;
    }
    if(temp == head){
        return true;
    }
    else{
        return false;
    }
}

bool detectLoop(Node* head){

    if(head==NULL){
        return false;
    }

    map<Node* ,bool> visited;
    Node* temp=head;

    while(temp!=NULL){

        //cycle is present
        if(visited[temp]==true){
            cout<<"present on element = "<<temp->data<<endl;
            return true;
        }

        visited[temp]=true;
        temp=temp->next;
    }
    return false;
}

Node* FloydDetectLoop(Node* head){

    if(head==NULL){
        return NULL;
    }

    Node* slow=head;
    Node* fast=head;

    while(slow != NULL && fast != NULL){

        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }

        slow=slow->next;

        if(slow==fast){
            return slow;
        }
    }
    return NULL;
}

Node* getStartingNode(Node* head){

    if(head==NULL){
        return NULL;
    }

    Node* PointOfIntersection = FloydDetectLoop(head);
    Node* slow=head;

    while(slow != PointOfIntersection){
        slow = slow -> next;
        PointOfIntersection = PointOfIntersection->next;
    }

    return slow;
}

Node* removeLoop(Node* head){
    if(head==NULL){
        return NULL;
    }

    Node* startOfLoop=getStartingNode(head);
    Node* temp=startOfLoop;

    while(temp->next != startOfLoop){
        temp=temp->next;
    }    
    temp->next=NULL;
}

int main(){

    //created a new node
   Node* node1=new Node(10);
   // cout<< node1 ->data <<endl;
   // cout<< node1 ->next <<endl;

    //head pointed to node1
    Node* head = node1;
    Node* tail = node1;

    print(head);

    //InsertAtHead(head ,12);
    InsertAtTail(tail,12);
    //print(head);

    //InsertAtHead(head ,15);
    InsertAtTail(tail,15);
    //print(head);

    //insertAtPossition(tail,head,3,13);
    // //print(head);

    // insertAtPossition(tail,head,1,9);
    // //print(head);
 
    // insertAtPossition(tail,head,6,16);
    // print(head);

    // deletenode(3 ,head);
    // print(head);

    cout<<"Head "<<head->data<<endl;
    cout<<"Tail "<<tail->data<<endl;

    // reverseLinkedList(head);

    tail->next=head->next;

    // if(isCircular(tail)){
    //     cout<<"Linked List is circular in nature"<<endl;
    // }
    // else{ 
    //     cout<<"Linked List is not circular in nature"<<endl;
    // }

    // if(detectLoop(tail)){
    //     cout<<"cycle is present"<<endl;
    // }
    // else{
    //     cout<<"cycle is not present"<<endl;
    // }

    if(FloydDetectLoop(tail)){
        cout<<"cycle is present"<<endl;
     }
     else{
         cout<<"cycle is not present"<<endl;
     }

    removeLoop(head);
    print(head);
    
    


}