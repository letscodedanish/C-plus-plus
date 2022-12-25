//CONVERSION
/*
a) binary to decimal
b) octal to decimal
c) hexadecimal to decimal
d) decimal to binary
e) decimal to ocatal
f) decimal to hexadecimal

*/

#include<bits/stdc++.h>
#include<math.h>
using namespace std;

// QUE 1--Binary to Decimal
/*
int convert(int n){
    int dec=0,i=0,rem;

    while(n!=0){
        rem = n % 10;
        n/=10;
        dec+=rem *pow(2,i);
        ++i;
    }
    return dec;
}

int main(){
    int n;
    cout<<"enter a binary number:";
    cin>>n;
    cout<<n<<"in banry = "<<convert(n)<<"in decimal";

    return 0;
} */

//QUE 2--Octal to Decimal

/*
int octalToDecimal(int n){
    int dec=0,i=0,rem;

    while(n!=0){
        rem = n % 10;
        n/=10;
        dec+=rem *pow(8,i);
        ++i;
    }
    return dec;
}

int main(){
    int n;
    cout<<"enter a octal number:";
    cin>>n;
    cout<<n<<"in octal = "<<octalToDecimal(n)<<"in decimal";

    return 0;
} */

//QUE 3-- Hexadecimal to decimal


int HexadecimalToDecimal(string n){
    int ans=0;
    int x=1;

    int s=n.size();
    for(int i=s-1;i>=0;i--){
        if(n[i] >= '0' && n[i]<= '9'){
            ans+= x*(n[i]-'0');
        }
        else if(n[i]>= 'A' && n[i]<= 'F'){
            ans+= x * (n[i] - 'A' + 10);
        }
        x*=16;
    }
    return ans;
}

int main(){
    string n;
    cin>> n;

    cout<<HexadecimalToDecimal(n)<<endl;
} 

//QUE 4--Decimal to Binary
/*
int DecimalToBinary(int n){
    int x=1;
    int ans=0;
    while(x<=n){
        x*=2;
        x/=2;
    }
    while(x>0){
        int lastDigit=n/x;
        n-=lastDigit*x;
        x/=2;
        ans= ans*10 + lastDigit;
    }
    return ans;
}

int main(){
    int n;
    cin>> n;

    cout<< DecimalToBinary(n)<<endl;

    return 0;
}*/

