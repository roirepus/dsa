#include <bits/stdc++.h>
using namespace std;


void leftRotate(int arr[],int n, int places){
	int i=0;
	for(int j=places;j<n;j++){
		int temp = arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		i++;
		if(i>places){break;}
	}
	
		int x= i;
		for(int k=i;k<n;k++){
			int swap = arr[x];
			arr[x]=arr[k+1];
			arr[k]=swap;
			x++;
		}

}

int main(){

	cout<<"size:\n ";
	int n;cin>>n;
	int arr[n]={0};
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	cout<<"enter places to rotate by: \n";

	int places;cin>>places;
	leftRotate(arr,n,places);

	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}

	return 0;
}