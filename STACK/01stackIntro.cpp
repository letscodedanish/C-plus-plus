#include<iostream>
#include<stack>
using namespace std;

class Stack{
    public:
    //properties
    int *arr;
    int top;
    int size;

    //behaviour
    Stack(int size){
        this->size=size;
        arr =new int[size];
        top=-1;
    }

    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"stack Overflow"<<endl;
        }
    }

    void pop(){
        if(top >=0){
            top--;
        }
        else
        {
            cout<<"stack Underflow"<<endl;
        }
    }

    int peek(){
        if(top >= 0)
            return arr[top];
        else{
            cout<<"stack is empty"<<endl;
            return -1;
        }    
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    
    Stack s(5);

    s.push(22);
    s.push(43);
    s.push(45);

    cout<<s.peek()<<endl;

    s.pop();

    cout<<s.peek()<<endl;

    if(s.isEmpty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"stack is not empty"<<endl;
    }





    /*
    //creation of stack
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);

    s.pop();

    cout<<"printing top element : "<<s.top()<<endl;

    if(s.empty()){
        cout<<"stack is empty."<<endl;
    }
    else{
        cout<<"stack is not empty."<<endl;
    }

    cout<<"The size of satck is : "<<s.size()<<endl;

    */

}