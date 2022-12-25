#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
/*
int main(){
    string str="danish";

    //convert into uppercase 

    for(int i=0;i<str.size();i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]-=32;
        }
    }
    cout<<str<<endl;

    //convert into lower case

    for(int i=0;i<str.size();i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i]+=32;
        }
    }
    cout<<str<<endl;

    return 0;
}
*/

//using transform function

int main(){
    string str="danish";
    //to convert it into uppercase

    transform(str.begin(),str.end(),str.begin(),::toupper);
    cout<<str<<endl;
    
    //to convert it into lowercase

    transform(str.begin(),str.end(),str.begin(),::tolower);
    cout<<str;
    return 0;
}