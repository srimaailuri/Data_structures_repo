#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int x,y,z;
    cin>>x>>y>>z;
    int a=x*x,b=y*y,c=z*z;
    if( a==b+c|| b==a+c || c==a+b){
        cout<<"pythogoras triplet"<<endl;
    }
    else{
        cout<<"not a pythogoras triplet"<<endl;
    }
    







    return 0;
}