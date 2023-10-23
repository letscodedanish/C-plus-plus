//#include<iostream>
//using namespace std;
//
//int main(){
//    int n;
//    cin>>n;
//
//    int array[n];
//
//    for(int i=0;i<n;i++){
//        cin>>array[i];
//    }
//    for(int i=0;i<n;i++){
//        cout<<array[i]<<" ";
//    }
//    return 0;
//}
//

#include<iostream>
#include<vector>
using namespace std;
int main( ){
    int n;
    cout<<"give the number of elements to be in the array : ";
    cin>>n;
    
    
    vector<int> arr(n);
    cout<<"Put the numbers into the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Your elements are : ";
    
    for(int j = 0 ; j<n ; j++){
        cout<<arr[j]<<" ";
    }
    
}


/////////////////////////////  USER DESIGNED STATIC ARRAY IS A BAD PRACTICE SINCE STATIC ARRAY IS CONTIGUOUS AND UTILIZES MEMORY IN THE REAL TIME ///////////////////////////////////
 
