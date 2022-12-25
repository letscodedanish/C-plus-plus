#include<iostream>
#include<climits>
using namespace std;
//PRINT ALL SUBARRAY
/*
int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}  */

//MAXIMUM SUBARRAY SUM
// A)Brute Force Approach

/*
int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxSum=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum+=arr[k];
            }
            maxSum=max(maxSum,sum);
        }
    }
    cout<<maxSum<<endl;
    return 0;
}  */

// B)Cummulative Sum Approach

/*
int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int currSum[n+1];
    currSum[0]=0;

    for(int i=1;i<=n;i++){
        currSum[i]=currSum[i-1]+arr[i-1];
    }
    int maxSum=INT_MIN;
    for(int i=1;i<=n;i++){
        int sum=0;
        for(int j=0;j<i;j++){
            sum=currSum[i]-currSum[j];
            maxSum=max(sum,maxSum);
        }
    }
    cout<<maxSum;

    return 0;
} */

// C)Kadanes Algorithm

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int currSum=0;
    int maxSum=INT_MIN;

    for(int i=0;i<n;i++){
        currSum+=arr[i];
        if(currSum<0){
            currSum=0;
        }
        maxSum=max(maxSum,currSum);
    }
    cout<<maxSum<<endl;
    return 0;
}
