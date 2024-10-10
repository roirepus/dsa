#include <bits/stdc++.h>
#include <vector>
using namespace std;

bool print(int i, int n, vector<int> &res, vector<int> &arr, int sum, int k) {
  if (i == n) {
    if (sum == k) {
      for (auto it : res) {
        cout << it << " ";
      }
      cout << '\n';
      return true;
    }
    return false;
  }
  res.push_back(arr[i]);
  sum += arr[i];
  if (print(i + 1, n, res, arr, sum, k) == true) {
    return true;
  }
  sum -= arr[i];
  res.pop_back();
  if (print(i + 1, n, res, arr, sum, k) == true) {
    return true;
  }
  return false;
}
int main(int argc, char *argv[]) {
  vector<int> arr = {1, 2, 1};
  vector<int> res;
  int n = 3;
  int sum = 0;
  int k = 2;
  print(0, n, res, arr, sum, k);
  return 0;
}
