#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* prev;
    node* next;

    //Constructor
    node(int d){
        this->data=d;
        this->next=NULL;
        this->prev=NULL;

    }
    //destructor
    ~node(){
        int value= this->data;
        if(next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"memory free for node with data = "<<value<<endl;
    }
};

//traversing a linked list
void print(node* head){
    node* temp=head;

    while(temp!=NULL){
        cout<< temp->data<<"->";
        temp=temp ->next;
    }
    cout<<"NULL"<<endl;
    
}

//gives the length of linked list
int getLength(node* head){
    int lenght=0;
    node* temp=head;

    while(temp!=NULL){
        lenght++;
        temp=temp ->next;
    }
    return lenght;
}

void insertAtHead(node* &head,int d){

    //empty list
    if(head==NULL){
        node* temp=new node(d);
        head=temp;
    }
    else{
    node* temp=new node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
    }
}

void insertAtTail(node* &tail,node* &head,int d){
    //empty list
    if(tail==NULL){
        node* temp=new node(d);
        tail=temp;
        head=temp;
    }
    else{
    node* temp=new node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
    }
}

void insertAtPossition(node* tail,node* &head,int possition , int d){
    //insert at start
    if(possition==1){
        insertAtHead(head,d);
        return;
    }

    node* temp=head;
    int count=1;

    while(count<possition-1){
        temp=temp->next;
        count++;
    }

    //Inserting at last
    if(temp->next==NULL){
        insertAtTail(tail,head,d);
        return;
    }

    //creating a node for d
    node* nodeToInsert= new node(d);

    nodeToInsert->next=temp->next;
    temp->next->prev=nodeToInsert;
    temp->next=nodeToInsert;
    nodeToInsert->prev=temp;  
}

void deleteNode(int possition, node* &head){
    //delete first or start node

    if(possition==1){
        node* temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    else
    {
        //deleting any midddle node or last node
        node* curr=head;
        node* prev=NULL;

        int count=1;
        while(count < possition){
            prev=curr;
            curr=curr->next;
            count++;
        }
        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;

        delete curr;

    }

}

int main(){
   node* node1=new node(10);
    node* head=node1;
    node* tail=node1;
   // print(head);

   // cout<<getLength(head)<<endl;

    insertAtHead(head,11);
    print(head);

    insertAtHead(head,13);
    print(head);

    insertAtHead(head,15);
    print(head);

    insertAtTail(tail,head,9);
    print(head);

    insertAtPossition(tail,head,2,100);
    print(head);

    insertAtPossition(tail,head,0,101);
    print(head);

    cout<<"head= "<<head->data<<endl;
    cout<<"tail= "<<tail->data<<endl;


    insertAtPossition(tail,head,7,109);
    print(head);
    cout<<"head= "<<head->data<<endl;
    cout<<"tail= "<<tail->data<<endl;

    deleteNode(8,head);
    print(head);    

    cout<<"head= "<<head->data<<endl;
    cout<<"tail= "<<tail->data<<endl;

    deleteNode(1,head);
    print(head); 

    deleteNode(4,head);
    print(head);   
}
