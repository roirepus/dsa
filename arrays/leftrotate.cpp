#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int k;
  cin >> k;
  int temp[k];
  for (int i = 0; i < k; i++) {
    temp[i] = arr[i];
  }
  for (int i = 0; i < n - k; i++) {
    arr[i] = arr[i + k];
  }
  for (int i = n - k; i < n; i++) {
    arr[i] = temp[i - (n - k)];
  }
  for (auto x : arr) {
    cout << x << " ";
  }
}
