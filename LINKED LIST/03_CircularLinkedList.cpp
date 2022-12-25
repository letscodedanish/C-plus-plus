#include<iostream>
#include<map>
using namespace std;

class node{
    public:
    int data;
    node* next;

    //constructor
    node(int d){
        this->data=d;
        this->next=NULL;
    }

    //desrructor
    ~node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"memory free for node with data = "<<value<<endl;
    }
};

void insertNode(node* &tail,int element,int d){

    //empty list
    if(tail==NULL){
        node* newNode=new node(d);
        tail=newNode;
        newNode->next=newNode;
    }
    else
    {
        //non empty list
        //Assuming that the element is present in the lined list

        node* curr=tail;

        while(curr->data!=element){
            curr=curr->next;
        }

        //element found ->> curr is representing that element

        node* temp=new node(d);
        temp->next=curr->next;
        curr->next=temp;
    }
}

void print(node* tail){

    node* temp=tail;

     //empty list
    if(tail== NULL){
        cout<<" List Is Empty"<<endl;
        return;
    }

    do
    {
       cout<<tail->data<<" ";
       tail=tail->next;
    } while (tail != temp);
    cout<<endl;
    
}

void deleteNode(node* tail,int value){

    //empty list
    if(tail==NULL){
        cout<<"list is empty please check again"<<endl;
        return;
    }
    else
    {
        //non empty list
        //assuming that the "value" is present in the linked list
        node* prev=tail;
        node* curr=prev->next;

        while(curr->data != value){
            prev=curr;
            curr=curr->next;
        }

        prev -> next = curr -> next;

        // 1 Node Linked List
        if(curr == prev){
            tail=NULL;
        }
        // >2 Node Linked List
        else if(tail == curr){
            tail = prev; 
        }


        curr->next=NULL;
        delete curr;
    }
}

bool isCircular(node* head){
    //empty list
    if(head==NULL){
        return true;
    }

    node* temp=head->next;
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

bool detectLoop(node* head){

    if(head==NULL){
        return false;
    }

    map<node* ,bool> visited;
    node* temp=head;

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

node* FloydDetectLoop(node* head){

    if(head==NULL){
        return NULL;
    }

    node* slow=head;
    node* fast=head;

    while(slow != NULL && fast != NULL){

        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }

        slow=slow->next;

        if(slow==fast){
            cout<<"cycle is present at = "<<slow->data<<endl;
            return slow;
        }
    }
    return NULL;
}

node* getStartingNode(node* head){

    if(head==NULL){
        return NULL;
    }

    node* PointOfIntersection = FloydDetectLoop(head);
    node* slow=head;

    while(slow != PointOfIntersection){
        slow = slow -> next;
        PointOfIntersection = PointOfIntersection->next;
    }

    return slow;
}

node* removeLoop(node* head){
    if(head==NULL){
        return NULL;
    }

    node* startOfLoop=getStartingNode(head);
    node* temp=startOfLoop;

    while(temp->next != startOfLoop){
        temp=temp->next;
    }    
    temp->next=NULL;
}

int main(){

    node* tail=NULL;
    
    //empty list me insert kar rhe hain
    insertNode(tail,5,3);
    //print(tail);

    insertNode(tail,3,5);
    //print(tail);

    insertNode(tail,5,7);
    //print(tail);

    insertNode(tail,7,9);
    //print(tail);

    insertNode(tail,5,8);
    print(tail);

    // insertNode(tail,9,10);
    // print(tail);

    // insertNode(tail,3,4);
    // print(tail);

    // deleteNode(tail,5);
    // print(tail);
    
    // if(isCircular(tail)){
    //     cout<<"Linked List is circular in nature"<<endl;
    // }
    // else{ 
    //     cout<<"Linked List is circular in nature"<<endl;
    // }

    // if(detectLoop(tail)){
    //     cout<<"cycle is present"<<endl;
    // }
    // else{
    //     cout<<"cycle is not present"<<endl;
    // }

    // if(FloydDetectLoop(tail)){
    //     cout<<"cycle is present"<<endl;
    // }
    // else{
    //     cout<<"cycle is not present"<<endl;
    // }

    node* loop=getStartingNode(tail);
    cout<<"loop starts at = "<<loop->data<<endl;

    // removeLoop(tail);
    print(tail);

    
    return 0;
}