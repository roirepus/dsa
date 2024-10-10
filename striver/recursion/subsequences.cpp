#include <bits/stdc++.h>
#include <vector>
using namespace std;

void sub(int i, int n, vector<int> &res, vector<int> &arr) {

  if (i == n) {
    for (auto it : res) {
      cout << it;
    }
    cout << '\n';
    return;
  }
  // take the element
  res.push_back(arr[i]);
  sub(i + 1, n, res, arr);
  res.pop_back();

  // leave the element

  sub(i + 1, n, res, arr);
}

int main(int argc, char *argv[]) {
  vector<int> arr = {3, 1, 2};
  vector<int> res;
  int n = 3;

  sub(0, n, res, arr);
  return 0;
}
