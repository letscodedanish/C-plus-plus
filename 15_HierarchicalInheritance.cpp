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

class sheru : public dog{
    public:
    void dog1(){
    cout<<"sheruu"<<endl;}
};

class cat : public Animal{
    public:
    void meow(){
        cout<<"meowwww"<<endl;
    }
};



int main(){
    cat object;

    object.eat();
    object.meow();
    
    sheru object2;
    object2.eat();

}