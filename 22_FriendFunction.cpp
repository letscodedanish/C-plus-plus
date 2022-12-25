#include<iostream>
using namespace std;

class Rectangle{
    private:
    int length;

    public:
    Rectangle(){
        length=10;
    }

   friend int printlength(Rectangle); //Friend Function
};

int printlength(Rectangle b){
    b.length +=10;
    return b.length;
}

int main(){
    Rectangle b;
    cout<<"length of rectangle is:"<<printlength(b)<<endl;

    return 0;
}