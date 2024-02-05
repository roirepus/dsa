#include <bits/stdc++.h>
using namespace std;


// void swap(int x,int y){
// 	int z=0;
// 	z=x;
// 	x=y;
// 	y=z;
// }

int main(){

	//   my code from logic//

	int arr[9]={2,3,1,4,5,7,8,2,2};

	// for(int i =9;i>0;i--){
	// 	for(int j=1;j<i;j++){
	// 		if (arr[j]<arr[j-1]){
	// 			swap(arr[j],arr[j-1]);
	// 		}
	// 	}
	// }


	//striver's code//

	for (int i = 8; i>=0; i--)
	{
		int swap =0; //var to check whether swapped?
		/* code */
		for(int j=0;j<=i-1;j++){
			if(arr[j]>arr[j+1]){
				int temp =arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp;
				swap = 1;  //yes swap
			}
		}
		if(swap ==0){    	//no swap;;;;;;;;;;array already sorted now
			break;
		}
	}

	for(int i=0;i<9;i++){
		cout<<arr[i]<<" ";
	}

	return 0;
}