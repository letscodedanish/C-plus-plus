#include<iostream>
using namespace std;
//finding number of subarrys
int main(){
    int n;
    cin>>n;

    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    int current=0;
    for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
        current+=a[j];
        cout<<current<<endl;
    }
    }

    return 0;
}