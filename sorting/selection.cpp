#include<iostream>
using namespace std;

void insertion_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i;j<n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
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

    insertion_sort(arr,n);
    print_arr(arr,n);

    return 0;
}