#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  int k;
  cin >> k;
  // for (int i = 0; i < n; i++) {
  //   for (int j = i + 1; j < n; j++) {
  //     if ((v[i] + v[j]) == k) {
  //       cout << i << ' ' << j;
  //       break;
  //     }
  //   }
  // }

  // better
  // map<int, int> mpp;
  // for (int i = 0; i < n; i++) {
  //  int a = v[i];
  //  int more = k - a;
  //  if (mpp.find(more) != mpp.end()) {
  //    cout << mpp[more] << ' ' << i;
  //  }
  //  mpp[a] = i;
  //}

  int left = 0;
  int right = n - 1;

  return 0;
}
