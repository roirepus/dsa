#include <algorithm>
#include <bits/stdc++.h>
int main() {
  std::vector<int> v = {0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
  int jmp = int(sqrt(v.size()));
  int i = jmp;
  for (; i < v.size(); i += jmp) {
    if (v[i])
      break;
  }
  i -= jmp;
  for (int j = 0; j < jmp && i < v.size(); i++) {
    if (v[i]) {
      std::cout << i;
      break;
    }
  }
  return -1;
}
