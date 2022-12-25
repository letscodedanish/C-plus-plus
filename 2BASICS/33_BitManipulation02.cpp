#include<iostream>
using namespace std;

//write a program to check if a given number is a power of 2

bool ispowerof2(int n){
    return (n && !(n&n-1));
}
int main(){
    cout<<ispowerof2(16)<<endl;

    return 0;
}