#include <bits/stdc++.h>
using namespace std;

void rev(int l, vector<int> &arr) {

  // if (l == r)
  //   return;
  //
  // swap(arr[l], arr[r]);
  // l += 1;
  // r -= 1;
  // rev(l, r, arr);

  if (l >= (arr.size()) / 2)
    return;
  swap(arr[l], arr[arr.size() - l - 1]);
  rev(++l, arr);
}
int main() {
  vector<int> arr = {0, 1, 2, 3, 4};
  int l = 0;
  rev(l, arr);
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i];
  }
}
