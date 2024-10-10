#include <bits/stdc++.h>
using namespace std;

int main() {

  vector<int> v = {2, 5, 1, 1, 1, -1, 100};
  int n = v.size();
  int k = 2;

  int r = 0;
  int l = 0;

  int len = 0;

  int sum{0};
  while (r < n) {
    sum += v[l];
    if (sum <= k) {
      len = max(len, l - r + 1);
      r++;
    }
    if (sum > k) {
      sum = sum - v[l];
      l++;
    }
  }
  cout << len;
}
