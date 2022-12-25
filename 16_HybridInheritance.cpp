#include<iostream>
using namespace std;

//BASE CLASS -1 
class vehicle{
    public:
    vehicle(){
        cout<<"this is vehicle"<<endl;
    }
};

//BASE CLASS -2
class fare{
    public:
    fare(){
        cout<<"fare of vehicle"<<endl;
    }
};

//DERIVED CLASS -1
class car : public vehicle{

};

//DERIVED CLASS -2
class bus : public vehicle,public fare{

};


int main(){
    bus obj2;
    return 0;
}