#include <iostream>
using namespace std;

int binary_search(int arr[],int key,int n){
    int start=0;
    int end=n;
    while(end>=start){
        int mid=(start+end)/2;
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;
}

int main(){

    int n,key;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>key;
    cout<<binary_search(arr,key,n)<<endl;
    return 0;
}
