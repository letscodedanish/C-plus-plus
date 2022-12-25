#include<iostream>
using namespace std;

//Searching a matrix

int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    int x;
    cout<<"enter the element you want to find:"<<endl;
    cin>>x;

    bool flag=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==x){
                cout<<i<<" "<<j<<endl;
                flag=true;
            }
        }
    }
    if(flag=1){
        cout<<"the element is found\n";
    }
    else{
        cout<<"not found!!";
    }

    return 0;
}