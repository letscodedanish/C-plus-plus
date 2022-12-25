#include<iostream>
using namespace std;

void reverse(string s){
    if(s.length()==0){
        return;
    }

    string restofthestring=s.substr(1);
    reverse(restofthestring);
    cout<<s[0];
}

int main(){
    
    reverse("danishhhh");

    return 0;
}