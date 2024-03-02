#include <bits/stdc++.h>
using namespace std;




int main(){

	cout<<"size: ";
	int n;cin>>n;
	int arr[n]={0};
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	//brute

	for(int i=0;i<n-1;i++){
	
		if(arr[i]>arr[i+1]){
			cout<<"not sorted";
			break;
		}
		else{
			cout<<"sorted";
			break;
		}

	}


	return 0;
}