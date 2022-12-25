#include<iostream>
using namespace std;

int main(){
    int arr[100];

    int n=1;

    for(int i=0;i<=100;i++){
        arr[i]=n;
    }
    for(int i=0;i<=100;i++){
        cout<<arr[i];
    }
}