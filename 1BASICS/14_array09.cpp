#include<iostream>
#include<climits>
using namespace std;

//find the sub array in the array which has maximum sum{-1,4,7,2}
//using brut force approach
/*
int main(){
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int maxSum=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
               sum+=a[k];
            }
            maxSum=max(maxSum,sum);
        }
    }
    cout<<maxSum<<endl;
    return 0;
} */

//using cumulative sum approach

/*
int main(){
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int currsum[n+1];
    currsum[0]=0;

    for(int i=1;i<=n;i++){
        currsum[i]=currsum[i=1]+a[i-1];
    }

    int maxSum=INT_MIN;
    for(int i=1;i<=n;i++){
        int sum=0;
        for(int j=0;j<i;j++){
            sum=currsum[i]-currsum[j];
            maxSum=max(sum,maxSum);
        }
    }
    cout<<maxSum;
    return 0;
}  */

//Kadanes Algorithm
