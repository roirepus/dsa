#include <bits/stdc++.h>
using namespace std;

int sorted(int arr[], int n){
	int i =0;
	for(int j=0;j<n;j++){
		if(arr[i]!=arr[j]){
			arr[i+1]=arr[j];
			i++;
		}
	}
	return i+1;
}


int main(){

	cout<<"size: ";
	int n;cin>>n;
	int arr[n]={0};
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	sorted(arr,n);


	return 0;
}