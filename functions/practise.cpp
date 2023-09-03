#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int sum_subarray(int arr[],int n){
    int total_sum=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            total_sum+=sum;
        }
    }
    return total_sum;
}

int long_arithmetic_subarray(int arr[],int n){
    int ans=2;
    int pd=arr[1]-arr[0];
    int j=2;
    int curr=2;
    while(j<n){
        if(pd==(arr[j]-arr[j-1])){
            curr++;
        }
        else{
            pd=arr[j]-arr[j-1];
            curr=2;
        }
        ans=max(ans,curr);
        j++;
    }
    return ans;

}

int solve(int arr[],int n){
    int mx=arr[0];
    int record_breaking_days=0;
    for(int i=0;i<n;i++){
        if(i==0 and (arr[i]>arr[i+1])){
            record_breaking_days+=1;
        }
        if(i==n-1 and (arr[i]>mx)){
            record_breaking_days+=1;
        }
        if(arr[i]>mx and arr[i]<arr[i+1]){
            record_breaking_days+=1;
        }
    }
    return record_breaking_days;
}

void first_repeating_E1(int arr[],int n){
    const int N=100;
    int idx[N];
    std::fill_n(idx,N,-1);
    int mx=INT_MAX;

    for(int i=0;i<n;i++){
        if(idx[arr[i]]==-1){
            idx[arr[i]]=i;
        }
        else{
            mx=min(mx,idx[arr[i]]);
        }
    }
    if(mx==INT_MAX){
        cout<<"-1"<<endl;
    }
    else{
        cout<<mx<<endl;
    }
}

void subarray_with_sum(int arr[],int n,int s){
    int start=0,sum=arr[0];
    for(int i=1;i<n;i++){
        while(sum>s and start<i-1){
            sum-=arr[start];
            start++;
        }

        if(s==sum){
            cout<<sum<<endl;
            cout<<"subarray is found at "<<start<<" "<<i-1<<endl;
            return ;
        }

            sum+=arr[i];
    }
    cout<<"no subarray";
}

int missing_numbers(int arr[],int n){
    const int N=100;
    int check[N];
    fill_n(check,N,0);
    for(int i=0;i<n;i++){
        check[arr[i]]=1;
    }
    for(int i=0;i<N;i++){
        if(check[i]==0){
            return i;
        }
    }
}

int main(){

    int n,s;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //cin>>s;
    //sum_subarray(arr,n);
    //long_arithmetic_subarray(arr,n);
    //solve(arr,n);
    //first_repeating_E1(arr,n);
    //subarray_with_sum(arr,n,s);
    cout<<missing_numbers(arr,n)<<endl;



    return 0;
}