#include<iostream>
using namespace std;
//printing numbers til n in decreasing and increasing order --using recursion45

void dec(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    dec(n-1);
}

void inc(int n){
    if(n==1){
        cout<<"1"<<endl;
        return;
    }

    inc(n-1);
    cout<<n<<endl;
}

int main(){
   int n;
   cin>>n;
   //dec(n);
   inc(n);
    return 0;
}