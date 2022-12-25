// there are mainly three types of constructor
// Default , paramatrized and copy constructor

#include<iostream>
using namespace std;

class construct{
    public:
    int a;
    int b;
    int c;
    int d;

    //default constructer
    construct(){
        a=10;
        b=20;
        cout<<"default constructor called"<<endl;
    }

    //parametarized constructor
    construct(int x, int y){
        c=x;
        d=y;
        cout<<"parametarized constructor called"<<endl;
    }


};

int main(){
    //Default constructor called automatically when an object is created

    construct c;
    cout<<"a : "<<c.a<<endl;
    cout<<"b : "<<c.b<<endl;

    construct z(5,7); //Implicit call
    cout<<"c : "<<z.c<<endl<<"d : "<<z.d<<endl;
    construct r=construct(4,4); // Explicit call
    cout<<r.c<< " "<< r.d<<endl;

    return 0;
}