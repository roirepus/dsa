#include <bits/stdc++.h>
using namespace std;

void rec(int i, int x) {
  if (i < 1)
    return;
  rec(--i, x);
  cout << i;
}
int main() {
  int x;
  cout << "enter number: ";
  cin >> x;
  rec(x, x);
}
