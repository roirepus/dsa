#include <bits/stdc++.h>
using namespace std;

void swap(int &x, int &y) {
  int z = 0;
  z = x;
  x = y;
  y = z;
}
void stress() { cout << "hemlo plugin"; }

int main() {

  int arr[9] = {1, 2, 3, 3, 3, 3, 4, 4, 5};
  int swaps{0};

  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if (arr[j + 1] < arr[j]) {
        swap(arr[j], arr[j + 1]);
        swaps = 1;
      }
    }
    if (swaps == 0) {
      break;
    }
  }
  // for (int i = 0; i < 9; i++) {
  //   cout << arr[i] << " ";
  //}
  cout << swaps;
}
