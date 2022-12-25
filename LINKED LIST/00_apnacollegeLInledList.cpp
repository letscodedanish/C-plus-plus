#include<iostream>
using namespace std;

class node{
   public:
   int data;
   node* next;

   node(int val){
    data=val;
    next=NULL;
   }
}; 

void insertAtHead(node* &head,int value){
    node* n=new node(value);
    n->next=head;
    head=n;
}

void insertAtTail(node* &head,int val){
    node* n =new node(val);

    if(head == NULL){
        head=n;
        return ;
    }

    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void display(node* head){
    node* temp=head;
    node* prev=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next; 
    }
    cout<<"NULL"<<endl;
}

bool search(node* &head,int key){
    node* temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            cout<<"key found"<<endl;
        }
        temp=temp->next;
    }
    return false;
}

void deletionAtHead(node* &head){
    node* todelete=head;
    head=head->next;

    delete todelete;
}

void deletion(node* &head,int value){

    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        deletionAtHead(head);
        return;
    }

    node* temp=head;
    while(temp->next->data!=value){
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;

    delete todelete;
}


node* reverse(node* &head){

    if(head==NULL || head->next==NULL){
        return head;
    }
    
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;

    while(currptr!=NULL){
        nextptr=currptr->next;
        currptr->next=prevptr;

        prevptr=currptr;
        currptr=nextptr;
    }

    return prevptr;
}

node* reverseRecursive(node* &head){

    if(head==NULL || head->next==NULL){
        return head;
    }

    node* newhead=reverseRecursive(head->next);
    head->next->next=head;
    head->next=NULL;

    return newhead;
}

void displayForMiddle(node* head){
    node* temp=head;
    node* slow=head;
    
    cout<<"The middle element is = "<<temp->data;

}

int getLength(node* head){
    int length=0;

    while(head!=NULL){
        length++;
        head=head->next;
    }
    return length;
}

node* findMiddle(node* head){
    int len=getLength(head);
    int ans=(len/2);

    node* temp=head;
    int count=0;

    while(count< ans){
        temp=temp->next;
        count++;
    }
    return temp;
}

node* getMiddle(node* head){
    //empty list
    if(head==NULL || head->next==NULL){
        return head;
    } 
    // 2 node needed or not? (ANS==NO)
    // if(head->next->next==NULL){
    //     return head->next;
    // }

    node* slow=head;
    node* fast=head->next;

    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;
    }
    return slow;
}

node* KReverse(node* &head,int k){

    //step-1:- Reverse first K nodes
    node* next=NULL;
    node* curr=head;
    node* prev=NULL;
    int count=0;

    while(curr != NULL && count<k){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
    }

    //Step-2:- Recursion dekh lega agee ka
    if(next != NULL){
        head->next=KReverse(next,k);
    }

    //Step-3:- Return head of reversed linked list
    return prev;
}

int main(){
    node* head=NULL;

    cout<<"linked list -- adding value to tail"<<endl;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4); 
    insertAtTail(head,5);
    insertAtTail(head,6);


    display(head);

    // cout<<"linked list -- adding value to haed"<<endl;
    // insertAtHead(head,5);
    // display(head);

    // cout<<"searching for our key"<<endl;
    // search(head,5);

    // cout<<"linked list -- after deletion of an element 3"<<endl;
    // deletion(head,3);
    // display(head);

    // cout<<"deleting our head element"<<endl;
    // deletionAtHead(head);
    // display(head);

    //REVERSE Linked LIst
    // node* newhead=reverse(head);
    // display(newhead);
 
    // node* newhead=reverseRecursive(head);
    // display(newhead);

    // node* ans=findMiddle(head);
    // displayForMiddle(ans);

    // node* ans=getMiddle(head);
    // displayForMiddle(ans);

    node* ans=KReverse(head,2);
    display(ans);

    
 
    

}