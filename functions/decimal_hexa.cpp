#include <iostream>
#include <bits/stdc++.h>

using namespace std;

string simple(int n){
    int x;
    char alpha;
    string ans="";
    while(n>0){
        x=n%16;
        if(x<10){
            ans=to_string(x)+ans;
        }
        else{
            alpha='A';
            x=x%10;
            alpha=alpha+x;
            ans=alpha+ans;
        }
        n=n/16;
    }
    return ans;
}

int convert_deci(string hexaval){
    int len=hexaval.size();
    int dec=0,index=0;

    for(int i=len-1;i>=0;i--){
        if(hexaval[i]>='0' && hexaval[i]<='9'){
            int digit=int(hexaval[i])-48;
            dec+=digit*pow(16,index);
            index++;
        }
        if(hexaval[i]>='A' && hexaval[i]<='F'){
            int digit=int(hexaval[i])-55;
            dec+=digit*pow(16,index);
            index++;
        }

    }
    return dec;

}

int main(){

    string n;
    cin>>n;
    //cout<<simple(n)<<endl;
    cout<<convert_deci(n)<<endl;
    
    return 0;
}