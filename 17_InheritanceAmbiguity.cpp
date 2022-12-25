#include<iostream>
using namespace std;

class A{
    public:
    void function(){
        cout<<"abc"<<endl;
    }
};

class B{
    public:
    void function(){
        cout<<"ABC"<<endl;
    }
};

class C : public A,public B{
    public:
};

int main(){
    C object;
    //object.function();//this is ambigous situation
    object.A :: function();
    object.B :: function(); 
}