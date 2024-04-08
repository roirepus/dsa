#include <bits/stdc++.h>
using namespace std;

bool pal(string &s, int n, int size) {
  if (n > s.length() / 2 - 1)
    return true;
  if (s[n] != s[size - 1 - n])
    return false;
  return pal(s, n + 1, size);
}

int main() {
  string s = "madam";
  int size = s.length();

  cout << pal(s, 0, size);
}
