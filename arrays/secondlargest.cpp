#include <bits/stdc++.h>
using namespace std;

// better

// int largest(int arr[],int n){
// 	int max = arr[0];
// 	for(int i=0;i<n;i++){
// 		if(arr[i]>=max){
// 			max=arr[i];
// 		}
// 	}
// 	return max;
// }
// int secondLargest(int arr[],int n, int largest){
// 	int secondLarge=-1;
// 	for(int i=n-2;i>=0;i--){
// 		if(arr[i]>=secondLarge&&arr[i]<largest){
// 			secondLarge=arr[i];
// 		}
// 	}
// 	return secondLarge;
// }

// int main(){

// 	cout<<"size: ";
// 	int n;cin>>n;
// 	int arr[n]={0};
// 	for(int i=0;i<n;i++){
// 		cin>>arr[i];
// 	}
// 	int l=largest(arr,n);
// 	if(secondLargest(arr, n,l)>-1){
// 	cout<<"second largest element: "<<	secondLargest(arr,n,l);
// 	}
// 	else{
// 		cout<<"all elements are equal";
// 	}


// 	return 0;
// }


//optimal

int main(){

	cout<<"size: ";
	int n;cin>>n;
	int arr[n]={0};
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	int largest = arr[0];
	int secondLargest = INT_MIN;
	for(int i=0;i<n-1;i++){
		if(arr[i]>largest){
			secondLargest=largest;
			largest=arr[i];
		}
		else if(a[i]<largest && a[i]>lsecondLargest){
			secondLargest = a[i];
		}
	}
	if(secondLargest>INT_MIN){

	cout<<"second largest: "<<secondLargest;
	}
	else{
		cout<<"no second largest";
	}

	return 0;
}