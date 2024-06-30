#include <bits/stdc++.h>
using namespace std;

int64_t brute(int n) {
  if (n <= 1) {
    return n;
  }
  return brute(n - 1) + brute(n - 2);
}

int64_t better(int n) {
  int arr[n];
  arr[0] = 0;
  arr[1] = 1;
  for (int i = 2; i <= n; i++) {
    arr[i] = arr[i - 1] + arr[i - 2];
  }
  return arr[n];
}

int main() {
  int n;
  cin >> n;
  cout << brute(n) << '\n';
  cout << better(n);
}
