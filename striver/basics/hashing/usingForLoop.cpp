#include <bits/stdc++.h>
using namespace std;

void count(int arr[], int k){
	int ctr = 0;
	for (int i =0; i<8; i++){
		if (arr[i]==k){
			ctr++;
		}
	}
	cout<<k<<" appears" <<ctr<<" times";
}

int main(){

	int x;
	cout<<"enter number of elements: "; cin>>x;

	int arr[x];

	for(int i=0;i<x;i++){
		cin>>arr[i];
	}

	//hashing

	int hash[14]={0};
	for(int i=0;i<x;i++){
		hash[arr[i]]++;
	}

	//feth

	cout<<"enter number of elements to fetch: \n";

	int k ; cin>>k;
	while(k--){
		
		cout<<"enter number: ";
		int q;cin>>q;

		cout<<q<<" appears "<<hash[q]<<" times\n";

	}	


	return 0;
}