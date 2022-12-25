#include<iostream>
using namespace std;

class A{
    public:
    void sayHello(){
        cout<<"HELLO DANISH"<<endl;
    }

    int sayHello(int n){
        cout<<"HELLO DANISH"<<endl;
        return n;
    }

    void sayHello(string name){
        cout<<"HELLO "<< name <<endl;
    }
};

int main(){
    A obj;
    obj.sayHello();
}