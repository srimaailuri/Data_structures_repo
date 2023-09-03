#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string simple(int n){
    int x;
    string ans="";
    while(n>0){
        x=n%2;
        ans=to_string(x)+ans;
        n=n/2;
    }
    return ans;
}

int decimal_binary(int n){
    int ans=0;
    int x=1;
    while(x<=n){
        x=x*2;
    }
    x=x/2;

    while(x>0){
        int last_digit=n/x;
        n-=last_digit*x;
        x=x/2;
        ans=ans*10+last_digit;
    }
    return ans;
}

int binary_decimal(int n){
    int ans=0;
    int x=0;
    int i=0;
    while(n!=0){
        x=n%10;
        ans=ans+x*pow(2,i);
        n=n/10;
        i++;
    }
    return ans;
}

int main(){

    int n,code;
    /*cin>>n;
    cout<<simple(n)<<endl;
    cout<<decimal_binary(n);*/
    cin>>code;
    cout<<binary_decimal(code);
    return 0;
}