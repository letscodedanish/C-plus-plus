#include<iostream>
using namespace std;

class Animal{
    public:
    void eat(){
        cout<<"eating"<<endl;
    }
};

class dog{
    public:
    void bark(){
        cout<<"barking"<<endl;
    }
};

class babydog : public Animal,public dog{
    public:
    void weep(){
        cout<<"weeping"<<endl;
    }
};
int main(){
    babydog object;

    object.eat();
    object.bark();
    object.weep();

}