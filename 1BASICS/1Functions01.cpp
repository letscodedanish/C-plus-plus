#include<iostream>
#include<math.h>
using namespace std;

// QUE 1--Write a function to add 2 integers?

/*
int add(int num1,int num2){
    int sum=num1+num2;
    return sum;
}

int main(){
    int a=2;
    int b=3;
    cout<<add(a,b)<<endl;
    return 0;
} */

//QUE 2--Printing numbers between two given numbers?

/*
bool isprime(int num){
    for (int i=2;i<=sqrt(num);i++){
        if(num % i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int a,b;
    cout<<"enter your range of numbers"<<endl;
    cin>>a>>b;

    for(int i=a;i<=b;i++){
        if (isprime(i)){
            cout<<i<<endl;
        }
    }

    return 0;
}  */

//QUE 3--Fibonaccci series?

/*
void fib(int n){
    int t1=0;
    int t2=1;
    int nextTerm;

    for(int i=1;i<=n;i++){
        cout<<t1<<endl;
        nextTerm=t1+t2;
        t1=t2;
        t2=nextTerm;

    }
}

int main(){
    int n;
    cin>>n;

    fib(n);

    return 0;
}  */

//QUE 4--Factorial of a number

/*
int fact(int n){
    int factorial=1;
    for (int i=2;i<=n;i++){
        factorial*=i;
    }
    return factorial;
}

int main(){
    int n;
    cout<<"enter your number:";
    cin>>n;

    int ans= fact(n);
    cout<<ans<<endl;

    return 0;
}  */

//QUE 5--Calculate nCr?

/*
int fact(int n){
    int factorial=1;
    for (int i=2;i<=n;i++){
        factorial*=i;
    }
    return factorial;
}

int main(){
    int n,r;
    cout<<"enter value of n and r:";
    cin>>n>>r;

    int ans = fact(n)/(fact(r)*fact(n-r));
    cout<<ans;

    return 0;
}  */

//QUE 6--Pascal triangle

//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1

/*
int fact(int n){
    int factorial=1;
    for(int i=2;i<=n;i++){
        factorial*=i;
    }
    return factorial;
}

int main(){
    int n;
    cin>>n;

    for(int i=0;i<=n;i++){
        for (int k=0;k<=i;k++){
            cout<<fact(i)/(fact(k)*fact(i-k))<<" ";
        }
        cout<<endl;
    }

    return 0;
}  */