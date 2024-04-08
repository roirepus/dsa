#include <bits/stdc++.h>
using namespace std;

void reverse(vector<int> &v, int r, int l) {

  if (r >= l) {
    return;
  } else {
    swap(v[r], v[l]);
    reverse(v, r + 1, l - 1);
  }
  return;
}
int main() {
  int n = 5;
  vector<int> v = {1, 2, 3, 4, 5};
  cout << "original array: ";
  for (auto it : v) {
    cout << it << " ";
  }

  reverse(v, 0, v.size() - 1);
  cout << "\nreversed array: ";
  for (auto it : v) {
    cout << it << " ";
  }
}
