#include<iostream>
using namespace std;

class B{
    public:
    int a;
    int b;

    public:
    int add(){
        return a+b;
    }

    void operator + (B &obj){
      /*  int value1= this -> a;
        int value2=obj.a;
        cout<<"output"<<value2 - value1<<endl;
        */
       cout<<"im + "<<endl;
    }

    void operator() (){
        cout<<"im bracket"<<" "<<this->a<<endl;
    }
    
};

int main(){
    B obj1,obj2 ,obj;

    obj1.a=4;
    obj2.b=7;

    obj1 + obj2;

    obj1();
}