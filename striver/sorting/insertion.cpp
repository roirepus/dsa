#include <bits/stdc++.h>
using namespace std;

// void swap(int x,int y){
// 	int z=0;
// 	z=x;
// 	x=y;
// 	y=z;
// }

int main() {

  //   my code from logic//

  int arr[9] = {2, 3, 1, 4, 5, 7, 8, 2, 2};

  // for(int i=1;i<9;i++){
  // 	for(int j=0;j<=i;j++){
  // 		if(arr[i]<arr[j]){
  // 			swap(arr[i],arr[j]);
  // 		}
  // 	}
  // }

  // striver's code//

  for (int i = 0; i <= 8; i++) {
    int j = i;
    while (j > 0 && arr[j - 1] > arr[j]) {
      int temp = arr[j - 1];
      arr[j - 1] = arr[j];
      arr[j] = temp;

      j--;
    }
  }

  for (int i = 0; i < 9; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}
