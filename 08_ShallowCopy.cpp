#include<iostream>
using namespace std;

class box{
    private:
    int length;
    int breadth;
    int height;

    public:
    void setValues(int a, int b, int c){
        length=a;
        breadth=b;
        height=c;
    }
    void showData(){
        cout<<"length = "<<length<<endl<<"breadth = "<<breadth<<endl
        <<"height = "<<height<<endl;

    }
};

int main(){
    box b1,b3;
    //set dimension of box b1
    b1.setValues(5,10,15);
    b1.showData();
    /* 
    when copying the data of object at the time of initialization
    then copy is made trough COPY CONSTRUCTOR
    */
    box b2=b1;
    b2.showData();

    /*
    when copying the data of object after initialization
    then the copy is done trough DEFAULT ASSIGNMENT OPERATOR
    */
    b3=b1;
    b3.showData();

    return 0;
}