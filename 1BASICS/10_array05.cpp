#include<iostream>
using namespace std;
//sum of all subarrays
int main(){
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int current=0;

    for(int i=0;i<n;i++){
        current=0;
        for(int k=i;k<n;k++){
            current+=a[k];
            cout<<current<<endl;
        }
    }
    return 0;
}
