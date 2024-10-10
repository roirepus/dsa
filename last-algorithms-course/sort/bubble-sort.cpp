

#include <bits/stdc++.h>
#include <iostream>
int main(void) {
  std::vector<int> v = {1, 3, 7, 4, 2};
  for (int i = 0; i < (v.size()); i++) {
    for (int j = 0; j < v.size() - 1 - i; j++) {
      if (v[j] > v[j + 1]) {
        int x = v[j + 1];
        v[j + 1] = v[j];
        v[j] = x;
      }
    }
  }
  for (auto it : v) {
    std::cout << it << " ";
  }
  return 0;
}
