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

class babydog : public dog{
    public:
    void weep(){
        cout<<"weeping"<<endl;
    }
};
int main(){
    babydog object;

    object.bark();
    object.eat();
    object.weep();

}