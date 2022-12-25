#include<iostream>
using namespace std;

class construct{
   public:
   float area;
   float volume;
   int x,y,z;

    //this is the constructor with no parameters
   construct(){
    area=0;
   }
   
   //constructor with two parameters
   construct(int a,int b){
    area=a*b;
   }

   construct(int x,int y,int z){
    volume=x*y*z;
   }

   void display(){
    cout<< area <<endl;
   }
};

int main(){
    construct o1;
    construct o2(10,15);
    construct o3(3,4,5);

    cout<<"Area using default constructor is :"<<endl;
    o1.display();
    cout<<"Area using parametarized constructor :"<<endl;
    o2.display();
    cout<<"the volume is:"<<endl;
    o3.display();
    

return 0;
}