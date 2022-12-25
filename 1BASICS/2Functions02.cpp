#include<iostream>
using namespace std;

//QUE 1--Sum of n numbers given as input
/*
int sum(int n){
    int ans=0;

    for(int i=1;i<=n;i++){
        ans+=i;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;

    cout<<sum(n)<<endl;
    return 0;
} */

//QUE 2--Pythogorean Triplet

/*
bool check(int x,int y,int z){
    int a= max(x,max(y,z));
    int b,c;

    if(a == x)
    {
        b=y;
        c=z;
    }
    else if(a == y)
    {
        b=x;
        c=z;
    }
    else
    {
        b=x;
        c=y;
    }

    if(a*a == b*b + c*c){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int x,y,z;
    cin>>x>>y>>z;

    if(check(x,y,z))
    {
        cout<<"pythagoran triplet";
    }
    else
    {
        cout<<"NOT a pythagoran triplet";
    }

    return 0;
} */

