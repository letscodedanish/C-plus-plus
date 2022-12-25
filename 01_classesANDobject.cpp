#include<iostream>
using namespace std;

class box{
    public:
    double width;
    double height;
    double depth;

};

int main(){
     box obj; //creating an object of box class

     obj.width=5;
     obj.height=10;
     obj.depth=15;

     double volume=obj.depth * obj.height * obj.width;

     cout<<"volume of box is= "<<volume;

return 0;
}