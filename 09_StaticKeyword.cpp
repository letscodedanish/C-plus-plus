#include<iostream>
using namespace std;

class state {
    static int x;
    int y;
    public:
    static void call(){
        int z=10;
        x++; //stattic data member
      //  y++; //non - static variable
        z++;  // local variable
        cout<<" "<<x;
    }
};

int state::x;

int main(){
    state s1,s2,s3;
    state::call();
    state::call();
    state::call();
    s1.call();
    s2.call();
    s3.call();

}