#include<iostream>
using namespace std;

class abstraction{
    private:
    int a;
    int b;

    public:

    void setValues(int x,int y){
        a=x;
        b=y;
    }

    void display(){
        cout<<" a = "<<a<<endl;
        cout<<" b = "<<b<<endl;
    }
};

int main(){
    abstraction obj;
    obj.setValues(10,20);
    obj.display();
}