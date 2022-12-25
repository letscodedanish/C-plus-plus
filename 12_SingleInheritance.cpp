#include<iostream>
using namespace std;

class Animal{
    public:
    void eat(){
        cout<<"eating"<<endl;
    }
};

class dog : public Animal{
    public:
    void bark(){
        cout<<"barking"<<endl;
    }
};

int main(){
    dog object;

    object.bark();
    object.eat();
}