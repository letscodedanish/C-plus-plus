//Searching in arrays

#include<iostream>
using namespace std;
/*
int linearSearch(int arr[],int n ,int key){
    for (int i=0; i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;

    int array[n];

    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    
    int key;
    cin>>key;

    cout<<linearSearch(array,n,key)<<endl;
    return 0;
}*/

// BINARY SEARCH

int binarysearch(int arr[],int n, int key){
    int start=0;
    int end=n;
    while(start<=end){
        int mid=(start+end)/2;

        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;

}

int main(){
    int n;
    cin>>n;

    int array[n];

    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int key;
    cin>>key;

    cout<<binarysearch(array,n,key)<<endl;

    return 0;
}