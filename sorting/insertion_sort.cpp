#include <iostream>
using namespace std;

void selection_sort(int arr[],int n){
    for(int i=1;i<n;i++){
        int j=i-1;
        int key=arr[i];
        while(j>=0 and arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}

void print_arr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}



int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selection_sort(arr,n);
    print_arr(arr,n);
}