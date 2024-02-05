#include <bits/stdc++.h>
using namespace std;


// void swap(int x,int y){
// 	int z=0;
// 	z=x;
// 	x=y;
// 	y=z;
// }

int main(){

	int arr[9]={2,3,1,4,5,7,8,2,2};

	for(int i=0;i<8;i++){
		int mini =i;
		for(int j=i;j<9;j++){
			if(arr[j]<arr[mini]){
				mini =j;

			}
		}
		int temp = arr[mini];
		arr[mini]=arr[i];
		arr[i]=temp;	
	}

	for(int i=0;i<9;i++){
		cout<<arr[i]<<" ";
	}

	return 0;
}