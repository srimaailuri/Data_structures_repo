// C++ code to linearly search x in arr[].
#include <iostream>
using namespace std;

int linear_search(int arr[],int n,int key){
	for(int j=0;j<n;j++){
		if(key==arr[j]){
			return j;
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

	cout<<linear_search(arr,n,key)<<endl;
	return 0;
	
}