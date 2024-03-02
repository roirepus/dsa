#include <bits/stdc++.h>
using namespace std;

int count(int arr[],int n){
	int max = arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]>=max){
			max=arr[i];
		}
	}
	return max;
}

int main(){

	cout<<"size: ";
	int n;cin>>n;
	int arr[n]={0};
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"largest element "<<count(arr,n);

	return 0;
}
