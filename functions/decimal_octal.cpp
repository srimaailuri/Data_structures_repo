#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string simple(int n){
    int x;
    string ans="";
    while(n>0){
        x=n%8;
        ans=to_string(x)+ans;
        n=n/8;
    }
    return ans;
}

int decimal_octal(int n){
    int ans=0;
    int x=1;
    while(x<=n){
        x=x*8;
    }
    x=x/8;

    while(x>0){
        int last_digit=n/x;
        n-=last_digit*x;
        x=x/8;
        ans=ans*10+last_digit;
    }
    return ans;
}

int octal_decimal(int n){
    int ans=0;
    int x=0;
    int i=0;
    while(n!=0){
        x=n%10;
        ans=ans+x*pow(8,i);
        n=n/10;
        i++;
    }
    return ans;
}

int main(){

    int n;
    cin>>n;
    /*cout<<simple(n)<<endl;
    cout<<decimal_octal(n);*/
    cout<<octal_decimal(n)<<endl;
    return 0;
}